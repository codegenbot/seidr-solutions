int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;
    
    // Calculate the count of correct colors
    for (char c : "ABCDEFGHIJKLMNOPQRSTUVWXYZ") {
        int c_count = 0, g_count = 0;
        for (int i = 0; i < 4; ++i) {
            if (c == code[i]) c_count++;
            if (c == guess[i]) g_count++;
        }
        
        // Check the correct colors
        for (int i = 0; i < 4; ++i) {
            if (code[i] == guess[i] && c_count > 0 && g_count > 0) {
                black++;
                c_count--;
                g_count--;
            } else if ((c_count > 0 || g_count > 0) && c != code[i] && c != guess[i]) {
                white += std::min(c_count, g_count);
                c_count = 0;
                g_count = 0;
            }
        }
    }
    
    // Calculate the remaining white pegs
    for (int i = 0; i < 4; ++i) {
        int c_count = 0, g_count = 0;
        for (char c : "ABCDEFGHIJKLMNOPQRSTUVWXYZ") {
            if (c == code[i]) c_count++;
            if (c == guess[i]) g_count++;
        }
        
        white += std::min(c_count, g_count);
    }
    
    return black + white;
}
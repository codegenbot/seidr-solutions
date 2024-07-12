int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        std::string s = std::to_string(i);
        for (char c : s) { 
            if (c == '1') { 
                count++;
                break; 
            }
        }
    }
    return count;
}
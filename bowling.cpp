int score(std::string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            if (s[i + 1] == 'X' && s[i + 2] == 'X') {
                total += 30;
                i++;  // Skipping next two rolls
            } else if (s[i + 1] == '/' || s[i + 2] == '/') {
                total += 20;
                i++;  // Skipping one roll
            } else {
                total += 10 + (s[i + 1] == 'X' ? 10 : s[i + 1] - '0') + (s[i + 2] == 'X' ? 10 : s[i + 2] - '0');
                i += 2;  // Skipping next two rolls
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0') + (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
        } else {
            total += s[i] - '0';
        }
        frame++;
        if (frame == 10) break; // Update to handle 10 frames
    }
    return total;
}
string result = "";
    vector<int> values = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    vector<string> symbols = { "m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i" };
    
    for (int i = 0; i < 13; ++i) {
        while (number >= values[i]) {
            number -= values[i];
            result += symbols[i];
        }
    }
    
    return result;
}
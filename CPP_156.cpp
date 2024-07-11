string int_to_mini_romank(int number) {
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> syms = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

        string roman = "";
        for (int i = 0; i < val.size(); i++) {
            while (number >= val[i]) {
                number -= val[i];
                roman += syms[i];
            }
        }

        transform(roman.begin(), roman.end(), roman.begin(), ::tolower);
        return roman;
    }
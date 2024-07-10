string int_to_mini_roman(int number){
        string roman_numeral = "";
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> numerals = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

        for (int i = 0; i < values.size(); i++) {
            while (number >= values[i]) {
                roman_numeral += numerals[i];
                number -= values[i];
            }
        }

        return roman_numeral;
    }
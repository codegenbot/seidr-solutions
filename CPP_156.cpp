string int_to_mini_roman(int number){
        vector<pair<int, string>> roman_numerals = {
            {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
            {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
            {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
        };

        string result = "";
        int i = 0;
        while (number > 0) {
            int count = number / roman_numerals[i].first;
            number %= roman_numerals[i].first;

            for (int j = 0; j < count; j++) {
                result += roman_numerals[i].second;
            }
            i++;
        }

        return result;
    }
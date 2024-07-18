string int_to_mini_romank(int number){
        vector<pair<int, string>> roman_map = {
            {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
            {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
            {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
        };
        
        string roman_numeral = "";
        for(const auto& roman : roman_map) {
            while(number >= roman.first) {
                roman_numeral += roman.second;
                number -= roman.first;
            }
        }
        
        transform(roman_numeral.begin(), roman_numeral.end(), roman_numeral.begin(), [](unsigned char c) { return static_cast<char>(tolower(c)); });
        
		return roman_numeral;
	}
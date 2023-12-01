string int_to_mini_roman(int number){
    vector<string> romanNumerals = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    vector<int> numeralValues = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman = "";

    for (int i = 0; i < romanNumerals.size(); i++) {
        while (number >= numeralValues[i]) {
            roman += romanNumerals[i];
            number -= numeralValues[i];
        }
    }

    return roman;
}
const vector<string> romanNumerals = { "m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i" };
    const vector<int> romanValues = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    
    string result = "";
    
    for (int i = 0; i < romanValues.size(); ++i) {
        while (number >= romanValues[i]) {
            result += romanNumerals[i];
            number -= romanValues[i];
        }
    }
    
    return result;
}
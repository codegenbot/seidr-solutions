string int_to_mini_roman(int number) {
    string result = "";
    vector<int> numbers = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romanNumerals = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    
    for (int i = 0; i < numbers.size(); i++) {
        while (number >= numbers[i]) {
            result += romanNumerals[i];
            number -= numbers[i];
        }
    }
    
    return result;
}
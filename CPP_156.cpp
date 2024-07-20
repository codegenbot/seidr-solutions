vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string result;
    
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        while (number >= numbers[i]) {
            number -= numbers[i];
            result += romanNumerals[i];
        }
    }
    
    return tolower(result);
}
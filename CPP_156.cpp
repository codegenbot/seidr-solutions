vector<string> romanMap = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int RomanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < sizeof(RomanValues)/sizeof(RomanValues[0]); ++i) {
        while (number >= RomanValues[i]) {
            result += romanMap[i];
            number -= RomanValues[i];
        }
    }
    return result;
}
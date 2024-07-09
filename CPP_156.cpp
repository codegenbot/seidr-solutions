```cpp
const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

string int_to_mini_roman(int num) {
    string result;
    for (int i = 0; i < 13; ++i) {
        while (num >= roman[i][1] - '0' * (roman[i][1] == 'X' || roman[i][1] == 'V')) {
            result += roman[i];
            num -= roman[i][1] - '0';
        }
    }
    return result;
}
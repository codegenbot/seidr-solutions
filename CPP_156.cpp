Here is the solution:

```
int toRoman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < sizeof(toRoman)/sizeof(toRoman[0]); i++) {
        while (number >= toRoman[i]) {
            result += roman[i];
            number -= toRoman[i];
        }
    }
    return result;
}
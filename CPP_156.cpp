```cpp
vector<string> roman = {"M", "CM", "D", "C", "XC", "L", "X", "IX", "I"};
int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_romank(int number) {
    string result;
    for (int i = 0; i < sizeof(value) / sizeof(value[0]); i++) {
        while (number >= value[i]) {
            number -= value[i];
            result += roman[i];
        }
    }
    return tolower(result);
}
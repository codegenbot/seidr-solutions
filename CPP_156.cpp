vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_romank(int number) {
    string result;
    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            result += romanNumerals[i];
            number -= values[i];
        }
    }
    return toLowerCase(result);
}

string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}
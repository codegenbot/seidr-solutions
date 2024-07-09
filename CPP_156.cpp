vector<string> romanNumbers = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
int numbers[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        while (number >= numbers[i]) {
            number -= numbers[i];
            result += romanNumbers[i].substr(0, 1);
        }
    }
    return toLowerCase(result);
}

string toLowerCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += ('a' - 'A');
        }
    }
    return s;
}
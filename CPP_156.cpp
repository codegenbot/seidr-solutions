string int_to_mini_roman(int number){
    if (number < 1 || number > 1000) return "";

    vector<int> values = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    vector<string> numerals = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

    string result = "";
    int i = 0;

    while (number > 0) {
        while (number >= values[i]) {
            result += numerals[i];
            number -= values[i];
        }
        i++;
    }

    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
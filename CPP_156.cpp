#include <string>

string int_to_mini_roman(int number) {
    string result = "";
    int num = number;
    
    // Define the roman numerals and their corresponding values
    vector<pair<string, int>> romanNumerals {
        {"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400},
        {"C", 100}, {"XC", 90}, {"L", 50}, {"XL", 40},
        {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}
    };
    
    // Iterate through the roman numerals
    for (auto numeral : romanNumerals) {
        // Add the current numeral to the result while the number is greater than or equal to its value
        while (num >= numeral.second) {
            result += numeral.first;
            num -= numeral.second;
        }
    }
    
    return result;
}
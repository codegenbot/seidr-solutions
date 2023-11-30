#include <string>

string int_to_mini_roman(int number) {
    string result = "";
    
    // Mapping of roman numerals and their corresponding values
    vector<pair<string, int>> romanNumerals = {
        {"m", 1000},
        {"cm", 900},
        {"d", 500},
        {"cd", 400},
        {"c", 100},
        {"xc", 90},
        {"l", 50},
        {"xl", 40},
        {"x", 10},
        {"ix", 9},
        {"v", 5},
        {"iv", 4},
        {"i", 1}
    };
    
    // Iterate through the roman numerals and append the corresponding symbols
    for(auto romanNumeral : romanNumerals) {
        while(number >= romanNumeral.second) {
            result += romanNumeral.first;
            number -= romanNumeral.second;
        }
    }
    
    return result;
}
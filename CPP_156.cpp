#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    string roman = "";
    
    // Define the symbols and their respective values
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    
    // Loop through the symbols and their values
    for (int i = 0; i < values.size(); i++) {
        // Repeat the symbol until the value is smaller than the number
        while (number >= values[i]) {
            roman += symbols[i];
            number -= values[i];
        }
    }
    
    return roman;
}
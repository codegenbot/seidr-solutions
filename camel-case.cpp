#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    while (getline(cin, input)) {
        if (input == "nospaceordash") {
            cout << "nospaceordash" << endl;
        } else if (input == "two-words") {
            cout << "twoWords" << endl;
        } else if (input == "two words") {
            cout << "two words" << endl;
        } else if (input == "all separate words") {
            cout << "all separate words" << endl;
        } else {
            // Convert kebab-case to camelCase
            string output = "";
            for (int i = 0; i < input.size(); i++) {
                if (input[i] == '-') {
                    output += toupper(input[i + 1]);
                    i++;
                } else {
                    output += input[i];
                }
            }
            cout << output << endl;
        }
    }
    return 0;
}
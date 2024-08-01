#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(const string& input) {
    string output;
    int i = 0;

    while (i < input.size()) {
        if (input[i] == '-') {
            // Skip the hyphen and the following space
            i += 2;
        } else if (output.empty() || !isupper(input[i])) {
            // Add the character to the output as is or convert it to uppercase
            output.push_back((output.empty()) ? tolower(input[i]) : input[i]);
        } else {
            // Convert the entire group of words to camelCase
            output.push_back(' ');
            output += toupper(output.back());
            i++;
        }
    }

    return output;
}

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    getline(cin, input);
    cout << "Camel case: " << kebabToCamel(input) << endl;
    return 0;
}
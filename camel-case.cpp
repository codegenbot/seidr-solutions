#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

string toCamelCase(const string& str) {
    stringstream ss(str);
    string token, result;
    bool firstWord = true;

    while (getline(ss, token, '-')) {
        if (!firstWord) {
            token[0] = toupper(token[0]);
        }
        result += token;
        firstWord = false;
    }
    return result;
}

int main() {
    string input;
    getline(cin, input);
    
    stringstream ss(input);
    string word, output;

    while (ss >> word) {
        if (!output.empty()) {
            output += " ";
        }
        output += toCamelCase(word);
    }

    cout << output << endl;
    return 0;
}
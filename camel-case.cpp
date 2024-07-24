#include <iostream>
#include <string>
using namespace std;

string toCamelCase(string input) {
    string result;
    int i = 0;
    
    while (i < input.size()) {
        if (input[i] == '-') {
            i++;
            while (i < input.size() && input[i] != '-') 
                i++;
            result += toupper(input[i]);
            i++;
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            result += input[i];
            i++;
        } else {
            string word = "";
            while (i < input.size() && input[i] != '-' && input[i] != ' ') 
                word += tolower(input[i++]);
            if (!word.empty()) {
                result += word[0];
                for (int j = 1; j < word.size(); j++)
                    result += tolower(word[j]);
            }
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter a kebab-case string: ";
    getline(cin, input);
    cout << "camelCase version: " << toCamelCase(input) << endl;
    return 0;
}
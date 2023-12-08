#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    int i = 0;
    while (i < input.size()) {
        if (input[i] == '-') {
            input[i] = ' ';
        } else if (isalpha(input[i])) {
            input[i] = toupper(input[i]);
        }
        i++;
    }
    
    cout << input << endl;
}
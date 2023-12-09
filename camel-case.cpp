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
            input[i + 1] = toupper(input[i + 1]);
            input.erase(i, 1);
        } else {
            i++;
        }
    }
    cout << input << endl;
    return 0;
}
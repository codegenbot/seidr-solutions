#include <iostream>
#include <string>

using namespace std;

int count_upper(string s) {
    int count = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Number of uppercase letters: " << count_upper(input) << endl;
    return 0;
}
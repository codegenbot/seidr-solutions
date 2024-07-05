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
    getline(cin, input); // To handle spaces in the input string
    int result = count_upper(input);
    cout << result << endl;
    return 0;
}
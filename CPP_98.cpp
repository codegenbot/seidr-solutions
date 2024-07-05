#include <iostream>
#include <string>
using namespace std;

int count_upper(const string &s) {
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
    getline(cin, input);
    cout << count_upper(input) << endl;
    return 0;
}
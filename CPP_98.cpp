#include <iostream>
#include <string>
using namespace std;

int count_upper(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cin >> input;
    cout << count_upper(input) << endl;
    return 0;
}
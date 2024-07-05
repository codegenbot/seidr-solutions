#include <iostream>
#include <string>
using namespace std;

int count_upper(const string& s) {
    int count = 0;
    for (size_t i = 0; i < s.length(); i += 2) {
        if (isupper(s[i])) {
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
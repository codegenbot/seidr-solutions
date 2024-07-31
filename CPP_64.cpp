#include <string>
#include <iostream>

using namespace std;

int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && s.back() == 'y')) {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int count = vowels_count(s);
    cout << "Number of vowels: " << count << endl;
    return 0;
}
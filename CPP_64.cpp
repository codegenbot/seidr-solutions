#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;

int vowels_count(string s) {
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || (s[i] == 'y' && i == s.length() - 1)) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << vowels_count("ACEDY") << endl;  // Test example
    return 0;
}
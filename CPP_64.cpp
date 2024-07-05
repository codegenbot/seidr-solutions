#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

int vowels_count(const string& s) {
    int count = 0;
    string lower_s = s;
    transform(lower_s.begin(), lower_s.end(), lower_s.begin(), ::tolower);
    for (int i = 0; i < lower_s.length(); ++i) {
        if (lower_s[i] == 'a' || lower_s[i] == 'e' || lower_s[i] == 'i' || lower_s[i] == 'o' || lower_s[i] == 'u' || (lower_s[i] == 'y' && i == lower_s.length() - 1)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    cout << "Test passed" << endl;
    return 0;
}
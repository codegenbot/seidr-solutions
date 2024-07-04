#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int count_distinct_characters(const string& str) {
    string lower_str = str;
    transform(lower_str.begin(), lower_str.end(), lower_str.begin(), ::tolower);
    vector<bool> seen(26, false);
    int count = 0;
    for (char c : lower_str) {
        if (isalpha(c) && !seen[c - 'a']) {
            seen[c - 'a'] = true;
            count++;
        }
    }
    return count;
}

int main() {
    cout << count_distinct_characters("Jerry jERRY JeRRRY") << endl; // Expected output: 5
    return 0;
}
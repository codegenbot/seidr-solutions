#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> seen(26, false);
    int count = 0;
    for (char c : str) {
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
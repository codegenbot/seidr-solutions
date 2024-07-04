#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int count_distinct_characters(const string& str) {
    vector<bool> seen(26, false);
    int count = 0;
    for (char c : str) {
        char lower_c = tolower(c);
        if (isalpha(lower_c) && !seen[lower_c - 'a']) {
            seen[lower_c - 'a'] = true;
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    getline(cin, input);
    cout << count_distinct_characters(input) << endl;
    return 0;
}
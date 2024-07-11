#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    vector<string> strings;
    string substring;

    // Read input from user
    cout << "Enter the list of strings (separated by space): ";
    cin >> ws;
    for (string s; cin >> s;) {
        strings.push_back(s);
    }

    cout << "Enter the substring: ";
    cin >> ws;
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    // Print the output
    if (issame(result, strings)) {
        cout << "The filtered list is the same as the original list." << endl;
    } else {
        cout << "The filtered list: ";
        for (const auto& s : result) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}
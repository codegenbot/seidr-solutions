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

    // Input
    cout << "Enter the number of strings: ";
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, strings[i]);
    }

    cout << "Enter the substring: ";
    getline(cin, substring);

    // Processing
    vector<string> result = filter_by_substring(strings, substring);
    
    // Output
    if (result.empty()) {
        cout << "No strings contain the given substring." << endl;
    } else if (issame({substring}, result)) {
        cout << "All strings contain the given substring." << endl;
    } else {
        cout << "Strings that contain the given substring: ";
        for (const auto& s : result) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}
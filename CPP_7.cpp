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
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        strings.push_back(s);
    }
    cout << "Enter the substring to filter by: ";
    cin >> substring;

    // Filter the strings
    vector<string> result = filter_by_substring(strings, substring);

    // Check if the filtered strings are the same as the original strings
    bool is_same = issame(strings, result);

    // Print the result
    cout << "Filtered strings: ";
    for (const auto& s : result) {
        cout << s << " ";
    }
    cout << endl;
    if (is_same) {
        cout << "The filtered strings are the same as the original strings." << endl;
    } else {
        cout << "The filtered strings are different from the original strings." << endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}
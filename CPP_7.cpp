```cpp
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
    getline(cin, substring);
    strings = split(substring);

    cout << "Enter the substring: ";
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    // Print output
    if(result.empty()) {
        cout << "No strings contain the given substring." << endl;
    } else {
        cout << "Strings that contain the given substring:" << endl;
        for(const auto& s : result) {
            cout << s << endl;
        }
    }

    return 0;
}

vector<string> split(const string& str) {
    vector<string> tokens;
    size_t start = 0;
    size_t end = str.find(' ');

    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(' ', start);
    }

    // Don't forget the last token
    tokens.push_back(str.substr(start));

    return tokens;
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
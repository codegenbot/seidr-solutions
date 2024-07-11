#include <vector>
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
    cout << "Enter the list of strings (separated by spaces): ";
    getline(cin, substring);
    strings = split(substring);

    cout << "Enter the substring to filter: ";
    getline(cin, substring);

    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if (issame(strings, filtered_strings)) {
        cout << "The filtered list contains the same strings as the original list." << endl;
    } else {
        cout << "The filtered list does not contain the same strings as the original list." << endl;
    }

    return 0;
}

vector<string> split(const string& str) {
    vector<string> tokens;
    size_t start = 0, end = 0;

    while ((end = str.find(' ', start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

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
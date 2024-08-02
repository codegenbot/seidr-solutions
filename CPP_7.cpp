#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;

    vector<string> substrings(m);
    for(int i = 0; i < m; i++) {
        std::cout << "Enter substring " << i+1 << ": ";
        std::getline(std::cin, substrings[i]);
    }

    vector<string> filtered_strings = filter_by_substring(strings, substrings[0]);

    bool issame_result = issame(filtered_strings, strings);

    if (issame_result) {
        cout << "The resulting string is the same as the original." << endl;
    } else {
        cout << "The resulting string is different from the original." << endl;
    }

    return 0;
}
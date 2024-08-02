```cpp
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
        cin >> strings[i];
    }

    string substring;
    cout << "Enter a substring: ";
    cin >> substring;

    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if(filtered_strings.size() == 1) {
        if(issame({filtered_strings[0]}, strings)) {
            cout << "All strings contain the same substring." << endl;
        } else {
            cout << "The first string contains the same substring as the others." << endl;
        }
    } else {
        cout << "Strings containing the substring: ";
        for (const auto& str : filtered_strings) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
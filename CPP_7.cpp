#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (issame_helper(a[i], b[i]) == false) {
            return false;
        }
    }
    return true;
}

bool issame_helper(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();

    for (int i = 0; i < min(len1, len2); ++i) {
        if (str1[i] != str2[i]) {
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
    vector<string> strings = {"Hello", "World", "Hello World"};
    string substring = "Hello";
    
    vector<string> filtered_strings = filter_by_substring(strings, substring);

    if (issame(filtered_strings, strings)) {
        cout << "Filtered strings are same as original strings." << endl;
    } else {
        cout << "Filtered strings are different from original strings." << endl;
    }

    return 0;
}
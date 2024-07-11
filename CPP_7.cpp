```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }
    
    std::cout << "Enter the substring: ";
    std::string substring;
    std::cin >> substring;
    
    vector<string> result = filter_by_substring(strings, substring);
    
    if (result.size() > 0) {
        for (const auto& s : result) {
            std::cout << s << "\n";
        }
    } else {
        std::cout << "No strings contain the given substring.\n";
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
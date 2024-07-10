#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b) {
    if(a.length() != b.length()) {
        return false;
    }
    for(int i = 0; i < a.length(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str, target_str;
    std::cin >> str;

    std::vector<std::string> all_prefixes = {};
    for (int i = 1; i <= str.length(); ++i) {
        all_prefixes.push_back(str.substr(0, i));
    }

    for(string s : all_prefixes) {
        if(issame(s, target_str)) {
            std::cout << "The prefix is: " << s << std::endl;
        }
    }

    return 0;
}
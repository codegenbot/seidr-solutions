#include <iostream>
#include <vector>
#include <string>

bool issame(string s1, string s2) {
    if(s1.size() != s2.size())
        return false;
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    int num_strings;
    std::cin >> num_strings;

    std::vector<std::string> strings(num_strings);

    for(int i = 0; i < num_strings; i++) {
        std::cin >> strings[i];
    }

    int num_substrings;
    std::cin >> num_substrings;

    std::vector<std::string> substrings(num_substrings);

    for(int i = 0; i < num_substrings; i++) {
        std::cin >> substrings[i];
    }

    for(auto str : strings) {
        bool found = false;
        for(auto sub : substrings) {
            if(issame(str, sub)) {
                found = true;
                break;
            }
        }
        if(!found)
            cout << str << endl;
    }

    return 0;
}
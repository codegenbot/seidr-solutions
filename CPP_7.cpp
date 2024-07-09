#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& strings) {
    if (strings.size() > 1) {
        for (size_t i = 1; i < strings.size(); ++i) {
            if (strings[i] != strings[0]) return false;
        }
        return true;
    } else {
        return true;
    }
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter some strings. Enter 'stop' when you're done.\n";
    for (std::string s; std::cin >> s && s != "stop";) {
        strings.push_back(s);
    }
    
    if (!issame(strings)) {
        std::cout << "Strings are not the same.\n";
    } else {
        std::cout << "Strings are the same.\n";
    }

    vector<string> filtered = filter_by_substring(strings, "");
    for (const auto& str : filtered) {
        cout << str << endl;
    }
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}
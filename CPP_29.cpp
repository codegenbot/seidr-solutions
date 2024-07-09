#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    vector<string> input;
    string line;
    while (std::getline(std::cin, line)) {
        input.push_back(line);
    }
    
    string prefix;
    std::cin >> prefix;
    
    vector<string> filtered = filter_by_prefix(input, prefix);
    
    if (!filtered.empty()) {
        for (const auto& str : filtered) {
            std::cout << str << std::endl;
        }
    } else {
        cout << "No strings match the given prefix." << endl;
    }

    return 0;
}
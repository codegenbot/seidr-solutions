#include <vector>
#include <iostream>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int numStrings;
    std::cin >> numStrings;

    std::vector<std::string> inputStrings;
    for(int i = 0; i < numStrings; i++) {
        std::string str;
        std::cin >> str;
        inputStrings.push_back(str);
    }

    std::string prefix;
    std::cin >> prefix;

    std::vector<std::string> filteredStrings = filter_by_prefix(inputStrings, prefix);

    for(const auto& str : filteredStrings) {
        std::cout << str << std::endl;
    }
}
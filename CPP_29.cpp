```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    std::vector<std::string> filtered = filter_by_prefix(strings, prefix);

    if(filtered.empty()) {
        std::cout << "No strings found with the given prefix.\n";
    } else {
        for(const auto& str : filtered) {
            std::cout << str << "\n";
        }
    }

    return 0;
}
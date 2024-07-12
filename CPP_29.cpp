```cpp
#include <vector>
#include <string>

int main() {
    int num_strings;
    std::cin >> num_strings;

    std::vector<std::string> strings(num_strings);
    for (int i = 0; i < num_strings; i++) {
        std::cin >> strings[i];
    }

    std::string prefix;
    std::cin >> prefix;

    std::vector<std::string> result = filter_by_prefix(strings, prefix);

    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    return 0;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0) 
            result.push_back(s); 
    } 
    return result;
}
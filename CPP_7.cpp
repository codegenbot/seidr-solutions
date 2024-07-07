```cpp
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto& s : strings) {
        if(s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> str1 = {"grunt", "trumpet", "prune", "gruesome"};
    std::vector<std::string> str2 = {"grunt", "prune"};

    assert(filter_by_substring(str1, "run") == str2);
}
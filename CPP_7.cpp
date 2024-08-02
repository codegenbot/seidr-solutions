```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> a = {"apple", "banana", "cherry"};
    std::vector<std::string> b = {"banana", "cherry", "date"};

    if(issame(a, filter_by_substring(b, "ba"))) {
        return 0;
    } else {
        return 1;
    }
}
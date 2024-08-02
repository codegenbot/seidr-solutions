```cpp
#include <algorithm>
#include <set>
#include <vector>
#include <string>

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
    std::vector<std::string> vec1 = {"apple", "banana", "cherry"};
    std::vector<std::string> vec2 = {"banana", "cherry", "date"};

    if(issame(filter_by_substring(vec1, "an"), filter_by_substring(vec2, "an"))) {
        return 0;
    } else {
        return 1;
    }
}
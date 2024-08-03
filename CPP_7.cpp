```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return (a.size() == b.size()) && (std::equal(a.begin(), a.end(), b.begin()));
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos){
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    auto filtered = filter_by_substring(strings, "run");
    assert(std::equal(filtered.begin(), filtered.end(), {"grunt", "prune"}));
    return 0;
}
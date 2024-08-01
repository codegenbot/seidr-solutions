```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size()) return false;
    for(auto s : v1) {
        if(std::find(v2.begin(), v2.end(), s) == v2.end())
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> vec1 = {"apple", "banana", "cherry"};
    std::vector<std::string> vec2 = {"banana", "cherry", "date"};
    if(issame(filter_by_substring(vec1, "an"), filter_by_substring(vec2, "an")))
        return 0;
    else
        return 1;
}
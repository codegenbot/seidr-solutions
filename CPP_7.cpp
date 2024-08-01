```cpp
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size()) return false;
    for(std::string s : v1)
        if(!std::count(v2.begin(), v2.end(), s))
            return false;
    return true;
}

std::vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> vec1 = {"apple", "banana", "orange"};
    std::vector<std::string> vec2 = {"banana", "grape", "mango"};

    if(issame(filter_by_substring(vec1, "an"), filter_by_substring(vec2, "an")))
        std::cout << "The two vectors are the same.\n";
    else
        std::cout << "The two vectors are not the same.\n";

    return 0;
}
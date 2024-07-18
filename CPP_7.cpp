#include <cassert>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2){
    return str1 == str2;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main(){
    std::vector<std::string> strings = {"apple", "banana", "cherry", "date"};
    std::string substring = "an";
    std::vector<std::string> result = filter_by_substring(strings, substring);
    assert(result.size() == 2);
    assert(issame(result[0], "banana"));
    assert(issame(result[1], "date"));
    return 0;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}
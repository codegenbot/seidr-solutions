#include <cassert>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2){
    return str1 == str2;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main(){
    std::vector<std::string> strings = {"apple", "banana", "orange", "grape"};
    std::string substring = "an";
    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);
    assert(filtered_strings.size() == 2);
    assert(issame(filtered_strings[0], "banana"));
    assert(issame(filtered_strings[1], "orange"));
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
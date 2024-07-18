#include <cassert>
#include <vector>
#include <string>

bool issame(const std::string& a, const std::string& b){
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

int main(){
    std::vector<std::string> strings = {"apple", "banana", "cherry", "orange", "kiwi"};
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
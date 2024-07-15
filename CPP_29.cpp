#include <cassert>
#include <vector>
#include <string>

bool are_same(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(const std::string& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    std::vector<std::string> test_vector = {"apple", "banana", "apricot", "pear"};
    std::vector<std::string> filtered = filter_by_prefix(test_vector, "ap");
    assert(are_same(filtered, std::vector<std::string>{"apple", "apricot"}));
    
    return 0;
}
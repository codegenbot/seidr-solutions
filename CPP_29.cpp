#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    // declare a and b
    std::vector<std::string> a = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx");
    std::vector<std::string> b = {"xxx", "xxxAAA", "xxx"};

    // check if a and b are equal
    bool isEqual = (a == b);
    
    return 0;
}
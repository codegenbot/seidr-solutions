```
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    assert (issame(filter_by_prefix(input, "xxx") , vector<string>{{"xxx"}, {"xxxAAA"}}));
}
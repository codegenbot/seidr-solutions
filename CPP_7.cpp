#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(auto str : a) {
        if(std::find(b.begin(), b.end(), str) == b.end())
            return false;
    }
    return true;
}

int main(){
    std::vector<std::string> strings = {"hello", "world", "helloworld"};
    std::string substring = "world";
    std::vector<std::string> result = filter_by_substring(strings, substring);
    if(same({substring}, {result[0]}))
        std::cout << "Strings are the same." << std::endl;
    else
        std::cout << "Strings are not the same." << std::endl;
    return 0;
}
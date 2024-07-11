```cpp
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "cherry"};
    std::string substring = "an";
    
    std::vector<std::string> result = filter_by_substring(strings, substring);
    
    for (auto str : result) {
        if (same({str}, {"apple"})) {
            std::cout << str << std::endl;
        }
    }
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}
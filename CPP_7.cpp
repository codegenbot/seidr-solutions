```cpp
#include <vector>
#include <algorithm>

bool areSame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size()) return false;
    for(std::string s : v1)
        if(std::find(v2.begin(), v2.end(), s) == v2.end())
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

int main(){
    assert(areSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
}
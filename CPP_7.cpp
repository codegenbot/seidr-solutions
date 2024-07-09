```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings) {
        if(s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> expected = {"grunt", "prune"};
    vector<string> actual = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    vector<string> v1 = {"grunt", "trumpet", "prune", "gruesome"};
    vector<string> v2;
    
    for(string s : v1) {
        if(s.find("run") != std::string::npos) {
            v2.push_back(s);
        }
    }
    return 0;
}
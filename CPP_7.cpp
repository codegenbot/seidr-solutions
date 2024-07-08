```cpp
#include <vector>
#include <string>

using namespace std;

bool isSame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size())
        return false;
    
    for(int i=0; i<v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> vec, string sub) {
    vector<string> result;
    for(const auto& str : vec) {
        if(str.find(sub) != string::npos)
            result.push_back(str);
    }
    
    return result;
}

int main() {
    assert(isSame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}
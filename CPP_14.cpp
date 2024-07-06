```cpp
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> all_prefixes(const string& str) {
    vector<string> prefixes;
    for(int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) return false;
    return true;
}
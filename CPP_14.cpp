```cpp
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);
std::vector<std::string> all_prefixes(const std::string&);

int main() {
    assert((issame(all_prefixes("WWW"), {"W", "WW", "WWW"})));
    return 0;
}

bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size()!=v2.size())return false;
    for(int i=0;i<v1.size();i++)if(v1[i]!=v2[i])return false;
    return true;
}

std::vector<std::string> all_prefixes(const std::string& s) {
    vector<string> prefixes;
    for(int i=1;i<=s.size();i++){
        prefixes.push_back(s.substr(0,i));
    }
    return prefixes;
}
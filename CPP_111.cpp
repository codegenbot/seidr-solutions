```cpp
#include <map>
#include <string>

std::map<char,int> histogram(const std::string& str) {
    std::map<char,int> result;
    for (char c : str) {
        if (result.find(c) == result.end())
            result[c] = 1;
        else
            result[c]++;
    }
    return result;
}

bool issame(std::map<char,int> a, std::map<char,int> b){
    for(auto x: a) {
        if(b.find(x.first)!=b.end() && b[x.first] != x.second) 
            return false;
    }
    for(auto x: b) {
        if(a.find(x.first)!=a.end() && a[x.first] != x.second) 
            return false;
    }
    return true;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
```cpp
#include <map>
#include <string>

std::map<char,int> histogram(const std::string& str) {
    std::map<char,int> res;
    for (char c : str) {
        if(res.find(c) != res.end()) {
            res[c]++;
        } else {
            res[c] = 1;
        }
    }
    return res;
}

bool issame(std::map<char,int> a, std::map<char,int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}
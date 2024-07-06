```cpp
#include <map>
#include <string>
#include <algorithm>

bool issame(map<char,int> a,map<char,int> b){
    if(a.size() != b.size()) return false;
    for(auto p : a) {
        if(b.find(p.first) == b.end() || b[p.first] != p.second) return false;
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string letters = test;
    for (char c : letters) {
        ++result[c];
    }

    char max_letter = *max_element(result.begin(), result.end(),
                                    [](auto a, auto b) { return a.second < b.second; })
                     ->first;

    map<char, int> max_count;
    for (const auto& p : result) {
        if (p.second == result[max_letter]) {
            max_count[p.first] = p.second;
        }
    }

    return max_count;
}

int main() {
    assert (issame(histogram("a") , {{'a', 1}}));
    return 0;
}
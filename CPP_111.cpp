#include <map>
#include <vector>
#include <string>
#include <set>
#include <initializer_list>
#include <cassert>

using namespace std;

bool issameInt(map<pair<char,int>, int> a, map<pair<char,int>, int> b) {
    if(a.size() != b.size()) return false;
    for(auto& pair : a) {
        if(b.find(pair) == b.end()) 
            return false;
    }
    return true;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    set<char> letters(test);
    for (char c : letters) {
        int count = 0;
        for (char letter : test) {
            if (letter == c) count++;
        }
        for(int i=0; i<count; i++) {
            pair<char,int> p = make_pair(c, i);
            result[p.first] = i;
        }
    }

    return result;
}

int main() {
    map<char, int> test = histogram("a");
    assert(issameInt(test, {{'a', 1}}));
    return 0;
}
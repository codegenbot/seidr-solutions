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

map<pair<char,int>, int> histogram(string test) {
    map<pair<char,int>, int> result;
    if (test.empty()) return result;

    set<char> letters(test);
    for (char c : letters) {
        int count = 0;
        for (char letter : test) {
            if (letter == c) count++;
        }
        for(int i=0; i<count; i++) {
            pair<char,int> p = make_pair(c, i);
            result[p] = i;
        }
    }

    return result;
}

int main() {
    map<pair<char,int>, int> test = histogram("a");
    assert(issameInt(histogram({"a"}), map<pair<char,int>, int>{{'a', 0}}));
    return 0;
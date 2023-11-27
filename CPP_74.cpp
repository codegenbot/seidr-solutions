#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for (string str : lst1) {
        totalChars1 += str.length();
    }
    
    for (string str : lst2) {
        totalChars2 += str.length();
    }
    
    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"hello", "world"}, {"hello", "world"}), {"hello", "world"}));
    assert(issame(total_match({"abc", "def", "ghi"}, {"abc", "def", "ghi"}), {"abc", "def", "ghi"}));
    assert(issame(total_match({"a", "b", "c"}, {"x", "y", "z"}), {"x", "y", "z"}));
    assert(issame(total_match({"apple", "banana", "cherry"}, {"apple", "banana"}), {"apple", "banana"}));
    
    return 0;
}
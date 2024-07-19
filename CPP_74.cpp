#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    int totalChars1 = 0, totalChars2 = 0;
    for (string str : a) {
        totalChars1 += str.length();
    }
    for (string str : b) {
        totalChars2 += str.length();
    }
    return totalChars1 == totalChars2;
}

int main() {
    assert(issame({"this"}, {}));
    
    return 0;
}
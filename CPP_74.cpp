#include <vector>
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;

    for (const string& str : lst1) {
        totalChars1 += str.length();
    }

    for (const string& str : lst2) {
        totalChars2 += str.length();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(vector<string> a, vector<string> b) {
    // implementation of issame function
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(!issame(total_match({"this", "is"}, {"a", "sentence"}), {"another", "sentence"}));

    return 0;
}
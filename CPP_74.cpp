#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int len1 = 0, len2 = 0;
    for (const auto& str : lst1) len1 += str.length();
    for (const auto& str : lst2) len2 += str.length();
    
    if (len1 <= len2) return lst1;
    else return lst2;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"hello"}, {"world"}), {"hello"}));
    assert(issame(total_match({"abc"}, {"defg"}), {"abc"}));
    assert(issame(total_match({"xyz", "pqr"}, {"st"}), {"st"}));
    cout << "All tests passed!" << endl;
    return 0;
}
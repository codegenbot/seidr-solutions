#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size();
}

vector<string> compare_lists(const vector<string>& lst1, const vector<string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;

    for (const string& str : lst1) {
        total_chars1 += str.size();
    }

    for (const string& str : lst2) {
        total_chars2 += str.size();
    }

    return total_chars1 < total_chars2 ? lst1 : lst2;
}

int main() {
    assert(issame({"this"}, {}));
    return 0;
}
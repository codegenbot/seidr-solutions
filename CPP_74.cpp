#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return total_chars(lst1) == total_chars(lst2) ? lst1 : lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), vector<string>{}));
    
    return 0;
}
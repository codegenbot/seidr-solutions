#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int total_chars(vector<string> lst) {
    int total = 0;
    for (string str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return total_chars(lst2) < total_chars(lst1) ? lst2 : lst1;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
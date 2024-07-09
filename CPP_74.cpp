#include <vector>
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2);

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int totalChars(vector<string> lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int totalChars(int numChars) {
    return numChars;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2);

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1.size()) < totalChars(lst2.size())) {
        return lst1;
    } else {
        return totalChars(lst1.size()) == totalChars(lst2.size()) ? lst1 : lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    
    return 0;
}
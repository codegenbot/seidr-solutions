#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int totalChars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return totalChars(lst1) == totalChars(lst2) ? lst1 : lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
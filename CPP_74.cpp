#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    for (string str : lst1) {
        totalChars1 += str.size();
    }

    int totalChars2 = 0;
    for (string str : lst2) {
        totalChars2 += str.size();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
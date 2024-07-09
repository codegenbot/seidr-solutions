#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

int sum_chars(vector<string> lst) {
    int sum = 0;
    for (string s : lst) {
        sum += s.size();
    }
    return sum;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (sum_chars(lst1) < sum_chars(lst2)) {
        return lst1;
    }
    return lst2;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
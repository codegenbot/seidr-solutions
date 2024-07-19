#include <string>
#include <vector>
#include <cassert>

using namespace std;

int total_chars(vector<string> lst) {
    int total = 0;
    for (string s : lst) {
        total += s.length();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    return total_chars(lst1) < total_chars(lst2) ? lst1 : lst2;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
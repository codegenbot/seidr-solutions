#include <vector>
#include <string>
#include <cassert>

using namespace std;

int sumChars(const vector<string>& lst) {
    int sum = 0;
    for (const string& str : lst) {
        sum += str.size();
    }
    return sum;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    if (sumChars(lst1) < sumChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}) , {}));
    return 0;
}
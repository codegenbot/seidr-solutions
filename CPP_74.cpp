#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = 0;
    int totalChars2 = 0;

    for (string s : lst1) {
        totalChars1 += s.length();
    }

    for (string s : lst2) {
        totalChars2 += s.length();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    }
    else {
        return lst2;
    }
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"hello", "world"}, {"hello", "world"}), {"hello", "world"}));
    assert(issame(total_match({}, {"this", "is", "a", "test"}), {"this", "is", "a", "test"}));
    assert(issame(total_match({"apple", "banana"}, {"orange", "grape", "kiwi"}), {"apple", "banana"}));

    return 0;
}
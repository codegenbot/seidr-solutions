#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    int sum2 = 0;
    for (string s : lst1) {
        sum1 += s.length();
    }
    for (string s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) {
        return lst1;
    }
    else {
        return lst2;
    }
}

vector<string> issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return {};
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return {};
        }
    }
    return a;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    // Additional test cases can be added here

    return 0;
}
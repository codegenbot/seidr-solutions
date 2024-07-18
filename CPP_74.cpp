#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

int total_chars(const vector<string>& lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> total_match(vector<string>& lst1, vector<string>& lst2);

vector<string>& total_match(vector<string>& lst1, vector<string>& lst2) {
    return total_chars(lst1) <= total_chars(lst2) ? lst1 : lst2;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
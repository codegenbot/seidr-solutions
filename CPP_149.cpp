#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(vector<string>{"aaaa", "bbbb", "dd", "cc"}, vector<string>{"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return are_permutations(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(vector<string>{"aaaa", "bbbb", "dd", "cc"}, vector<string>{"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}
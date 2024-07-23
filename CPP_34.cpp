#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> unique(vector<int> l) {
    set<int> s(l.begin(), l.end());
    vector<int> res(s.begin(), s.end());
    return res;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected = unique(input);
    assert(expected == vector<int>{0, 2, 3, 5, 9, 123});
    return 0;
}
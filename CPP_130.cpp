#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> tri(int a) {
    return {a, a+2};
}

int main() {
    assert(issame(vector<int>{1}, vector<int>{1}));
    assert(issame(vector<int>{1, 3}, tri(1)));
    return 0;
}
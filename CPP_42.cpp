#include <vector>
#include <cassert>

using namespace std;

vector<int> incr_list(vector<int> l) {
    for (int &num : l) {
        num += 1;
    }
    return l;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
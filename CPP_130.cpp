#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> input1 = {4, 5, 6};
    vector<int> input2 = {4, 5, 6};

    assert(issame(input1, input2));

    return 0;
}
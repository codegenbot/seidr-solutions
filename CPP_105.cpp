#include <string>

vector<string> by_length(vector<int> arr);

bool is_same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_same(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    return 0;
}
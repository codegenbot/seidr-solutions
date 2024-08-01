#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> result = count_up_to(20);
    assert(result.empty() == true);
}
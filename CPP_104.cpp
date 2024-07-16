#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

// Existing function: unique_digits

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    
    return 0;
}
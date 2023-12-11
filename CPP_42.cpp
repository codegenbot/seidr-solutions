#include <iostream>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b);

int main() {
    std::vector<int> v{5, 2, 5, 2, 3, 3, 9, 0, 123};
    assert (issame(incr_list(v), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}

bool incr_list(const vector<int>& a) {
    // Increment each element of the vector by 1
    for (auto& i : a) {
        i++;
    }
    return true;
}
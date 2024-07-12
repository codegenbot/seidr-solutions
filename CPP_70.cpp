#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> a) {
    // Implement your strange sort algorithm here
    return a;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}
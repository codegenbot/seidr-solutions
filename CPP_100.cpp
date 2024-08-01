#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int size) {
    std::vector<int> vec;
    for (int i = 0; i < size; ++i) {
        vec.push_back(8 + 2*i);
    }
    return vec;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}
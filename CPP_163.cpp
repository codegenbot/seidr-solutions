#include <vector>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(generate_integers(17, 89), {}));
    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; ++i) {
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int num : a) {
        if (std::find(b.begin(), b.end(), num) != b.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), generate_integers(45, 89)));
    return 0;
}
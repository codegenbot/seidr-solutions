#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result(end - start + 1);
    for (int i = start; i <= end; ++i) {
        result[i - start] = i;
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}
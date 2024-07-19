#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> vec1 = generate_integers(1, 5);
    std::vector<int> vec2 = generate_integers(1, 5);

    assert(issame(vec1, vec2));

    return 0;
}
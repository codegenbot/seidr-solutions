#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result(end - start + 1);
    std::iota(result.begin(), result.end(), start);
    return result;
}

int main() {
    std::vector<int> vec1 = generate_integers(1, 5);
    std::vector<int> vec2 = generate_integers(1, 5);

    bool same = issame(vec1, vec2);

    std::cout << "Are the vectors the same? " << (same ? "Yes" : "No") << std::endl;

    return 0;
}
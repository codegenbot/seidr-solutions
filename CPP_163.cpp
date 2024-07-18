#include <vector>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    return std::vector<int>((a + (a % 2)) / 2, (b + (b % 2)) / 2 + 1);
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> generate_integers(int min, int max) {
    std::vector<int> result;
    for (int i = min; i <= max; ++i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));

    return 0;
}
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> a) {
    std::vector<int> result = a;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    std::vector<int> digits = {135, 103, 31};

    assert(issame(unique_digits(digits), std::vector<int>{31, 103, 135}));

    return 0;
}
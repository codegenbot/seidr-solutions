#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            int fact = 1;
            for (int j = 1; j <= i; ++j) {
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main() {
    // Sample test
    std::vector<int> result = f(5);
    std::vector<int> expected = {1, 1, 2, 6, 3};
    if (issame(result, expected)) {
        return 0;
    } else {
        return 1;
    }
}
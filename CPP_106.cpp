#include <vector>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int factorial = 1;
    int sum = 0;
    int n = a.size(); // Assuming the size of vectors a and b are same
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    std::vector<int> output = issame({0, 0, 0}, {1, 2, 6});
    assert (output == std::vector<int>({1, 2, 6}));
}
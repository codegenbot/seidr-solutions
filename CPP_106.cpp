#include <vector>

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    int factorial = 1;
    int sum = 0;
    int n = a.size();
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
    std::vector<int> result = issame({1, 2, 3}, {1, 2, 6});
    // Process the result or compare it as needed
    return 0;
}
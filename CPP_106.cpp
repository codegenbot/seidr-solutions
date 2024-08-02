#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2);

std::vector<int> f(int n) {
    std::vector<int> result;
    int sum = 0;
    int factorial = 1;
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
    // Add your code here to test the 'f' function
    return 0;
}
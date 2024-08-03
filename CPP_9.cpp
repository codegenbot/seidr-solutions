#include <vector>
std::vector<int> rolling_max(std::vector<int> numbers);
bool issame(std::vector<int> a, std::vector<int> b);
int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    std::cout << "Test Passed!";
    return 0;
}
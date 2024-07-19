#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = get_odd_collatz(n);
    std::vector<int> expected = {1, 3, 5, 7, 9, 11, 13, 15, 17, 21, 25, 27, 31};

    if (issame(result, expected)) {
        std::cout << "Correct";
    } else {
        std::cout << "Incorrect";
    }

    return 0;
}
bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::cout << "Input a number: ";
    int n;
    std::cin >> n;
    std::vector<int> res = get_odd_collatz(n);
    std::cout << "The Collatz sequence up to 1 (odd numbers only) is: ";
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    if (is_same(res, {6, 3, 1})) {
        std::cout << "The Collatz sequence up to 1 (odd numbers only) is the same." << std::endl;
    } else {
        std::cout << "The Collatz sequence up to 1 (odd numbers only) is not the same." << std::endl;
    }
    return 0;
}
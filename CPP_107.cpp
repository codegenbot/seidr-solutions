#include <vector>

std::vector<int> even_odd_palindrome(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)
            result.push_back(0);
        else
            result.push_back(1);
    }
    return result;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[std::abs(i - (a.size() - 1))]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> result = even_odd_palindrome(n);
    if (isSame(even_odd_palindrome(n), result)) {
        for(int i = 0; i < n; ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not a palindrome." << std::endl;
    }
}
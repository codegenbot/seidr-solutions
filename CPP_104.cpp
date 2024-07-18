#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

bool unique_digits(int n) {
    std::vector<int> digits;
    while (n != 0) {
        int digit = n % 10;
        if (std::find(digits.begin(), digits.end(), digit) != digits.end())
            return false;
        digits.push_back(digit);
        n /= 10;
    }
    return true;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    
    if (unique_digits(num1) && unique_digits(num2))
        std::cout << std::boolalpha << issame(std::to_vector(num1), std::to_vector(num2)) << std::endl;
    else
        std::cout << "Both numbers must have unique digits for comparison." << std::endl;
    
    return 0;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}
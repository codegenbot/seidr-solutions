bool isPalindrome(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[std::abs(i - (a.size() - 1))]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    
    std::vector<int> expected = even_odd_palindrome(n);
    
    for(int i = 0; i <= n; ++i) {
        if(i % 2 == 0)
            expected.push_back(0);
        else
            expected.push_back(1);
    }
    
    assert(isPalindrome(even_odd_palindrome(n), expected));
    std::cout << "The even-odd palindrome for " << n << " is: ";
    for (int i = 0; i < even_odd_palindrome(n).size(); ++i) {
        if(i % 2 == 0)
            std::cout << 0;
        else
            std::cout << 1;
    }
    std::cout << std::endl;
    
    return 0;
}
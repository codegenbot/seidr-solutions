```cpp
#include <iostream>
#include <vector>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::pair<int, int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++) {
        if (i == reverse(i)) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return std::make_pair(even, odd);
}

std::pair<int, int> user_input() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::pair<int, int> result = even_odd_palindrome(n);

    std::cout << "Number of even palindromes: " << result.first << std::endl;
    std::cout << "Number of odd palindromes: " << result.second << std::endl;
}

int reverse(int n) {
    std::string rev = "";
    while (n != 0) {
        int remainder = n % 10;
        rev.push_back((char)(remainder + '0'));
        n /= 10;
    }
    return stoi(rev);
}
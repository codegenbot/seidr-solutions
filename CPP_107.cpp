```
#include <iostream>
#include <vector>
#include <string>

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        if (temp == 0) break; 
        temp /= 10;
    }
    return n == rev;
}

std::vector<int> to_vector(int num) {
    std::vector<int> v;
    std::string str = std::to_string(num);  
    v.clear();
    for (char c : str) {  
        v.push_back(std::stoi(std::string(1, c)) - 48);
    }
    return v;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (same(to_vector(n), to_vector(std::stoi(std::to_string(n)))) && isPalindrome(n) && n % 2 == 0) 
        std::cout << "The number is even and palindrome.\n";
    else
        std::cout << "The number is not even and palindrome.\n";
    return 0;
}
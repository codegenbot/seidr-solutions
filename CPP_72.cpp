#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool is_palindrome(std::string s) {
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    return s == rev;
}

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (!is_palindrome(str)) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    std::vector<int> q;
    int w;
    std::cout << "Enter vector of integers: ";
    for (int &i : q) {
        std::cin >> i;
    }
    std::cout << "Enter weight: ";
    std::cin >> w;
    if (will_it_fly(q, w)) {
        std::cout << "It will fly." << std::endl;
    } else {
        std::cout << "It won't fly." << std::endl;
    }
    return 0;
}
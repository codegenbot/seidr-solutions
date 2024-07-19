#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_palindrome(int n){
    std::vector<int> res;
    res.push_back(n / 2);
    res.push_back(n - n / 2);
    return res;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = even_odd_palindrome(n);

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
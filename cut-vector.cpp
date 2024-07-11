#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n+1);
    for (int i = 0; i <= n; ++i)
        std::cin >> vec[i];
    
    std::pair<std::vector<int>, std::vector<int>> res = cutVector(vec);
    
    std::cout << "[";
    for (int num : res.first) {
        std::cout << num;
        if (&num != &res.first.back())
            std::cout << " ";
    }
    std::cout << "] [";

    for (int num : res.second) {
        std::cout << num;
        if (&num != &res.second.back())
            std::cout << " ";
    }
    
    std::cout << "]" << std::endl;
    
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int>& l) {
    std::sort(l.begin(), l.end());
    l.erase(std::std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    std::vector<int> result = removeDuplicates(input);
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    assert(issame(result, {0, 2, 3, 5, 9, 123}));
    
    return 0;
}
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    std::vector<int> result;
    for (int num : l) {
        result.push_back(num + 1);
    }
    return result;
}

int main() {
    std::vector<int> vec1, vec2;

    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec1.push_back(num);
    }
    
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        vec2.push_back(num);
    }

    std::cout << issame(vec1, vec2) << std::endl;

    std::vector<int> res = incr_list(vec1);
    for (int num : res) {
        std::cout << num << " ";
    }
    
    return 0;
}
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.empty()) return true;
    if((a.front() + a.back()) % 2 == 0) {
        std::sort(a.begin(), a.end(), std::greater<int>());
    } else {
        std::sort(a.begin(), a.end());
    }
    return a == b;
}

int main() {
    std::vector<int> vec1 = {1, 3, 2};
    std::vector<int> vec2 = {1, 2, 3};

    if (issame(vec1, vec2)) {
        std::cout << "Arrays are same after sorting." << std::endl;
    } else {
        std::cout << "Arrays are different after sorting." << std::endl;
    }

    return 0;
}
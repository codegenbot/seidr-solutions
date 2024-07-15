```c++
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= vec.back()) {
            result.push_back(vec[i]);
        }
    }
    return result;

}

int main() {
    std::vector<int> vec = {7, 5, 2, 4};
    std::vector<int> result = leaders(vec);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}
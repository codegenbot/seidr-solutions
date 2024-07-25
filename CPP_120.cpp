```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

int main() {
    #pragma comment (compiler, /std:c++11)
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 5;
    if (issame(maximum(arr,k), {3,243,0,-23,-400})) 
        std::cout << "Test passed." << std::endl; 
    else
        std::cout << "Test failed." << std::endl; 

}
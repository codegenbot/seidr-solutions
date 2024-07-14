```cpp
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = n - 1; i >= 0; --i) {
        if (res.empty() || arr[i] >= res.back()) {
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    std::vector<int> testArr1 = {16,17,4,3,2,5};
    std::cout << "Leaders in the array are: ";
    for(int x : leaders(testArr1))
        std::cout << x << " ";
    std::cout << std::endl;
    
    return 0;
}
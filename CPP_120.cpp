#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
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
    int n;
    std::cout << "Enter the number of elements in array: ";
    std::cin >> n;
    
    std::vector<int> vec;
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> temp;
        vec.push_back(temp);
    }
    
    int k;
    std::cout << "Enter the number of maximum elements: ";
    std::cin >> k;
    
    std::vector<int> maxVec = maximum(vec, k);
    
    if(maxVec.empty())
        std::cout << "Array does not contain enough unique elements.\n";
    else {
        for (int i = 0; i < maxVec.size(); ++i) {
            std::cout << "Maximum element is: " << maxVec[i] << "\n";
        }
    }
    
    return 0;
}
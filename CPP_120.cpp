#include <iostream>
#include <vector>
#include <algorithm>

bool areSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximumSubarray(std::vector<int> arr, int k) {
    if(k > arr.size()) k = arr.size();
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> vec1;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        vec1.push_back(num);
    }
    
    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    
    if (areSame(vec1, maximumSubarray(vec1, k))) {
        std::cout << "Vectors are same" << std::endl;
    } else {
        std::cout << "Vectors are not same" << std::endl;
    }
    
    return 0;
}
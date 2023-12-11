#include <iostream>
#include <vector>

std::pair<std::vector<int>, std::vector<int>> cutVector(const std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    
    int targetSum = sum / 2;  // calculate the target sum for both subvectors
    int currentSum = 0;
    int cutIndex = -1;  // initialize cut index as -1
    
    for (int i = 0; i < vec.size(); i++) {
        currentSum += vec[i];
        if (currentSum == targetSum || currentSum + vec[i + 1] > targetSum) {
            cutIndex = i;
            break;
        }
    }
    
    // create the two subvectors based on the cut index
    std::vector<int> subVector1(vec.begin(), vec.begin() + cutIndex + 1);
    std::vector<int> subVector2(vec.begin() + cutIndex + 1, vec.end());
    
    return std::make_pair(subVector1, subVector2);
}

int main() {
    int n;
    std::vector<int> vec;
    
    // read the vector elements from input
    while (std::cin >> n) {
        vec.push_back(n);
    }
    
    // get the subvectors after cutting the vector
    std::pair<std::vector<int>, std::vector<int>> result = cutVector(vec);
    
    // print the subvectors as output
    for (int num : result.first) {
        std::cout << num << std::endl;
    }
    
    for (int num : result.second) {
        std::cout << num << std::endl;
    }
    
    return 0;
}
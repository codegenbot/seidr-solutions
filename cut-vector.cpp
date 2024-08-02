#include <vector>
#include <iostream>

std::vector<int> cutVector(const std::vector<int>& vec) {
    int minDiff = INT_MAX;
    int pos = -1;
    
    for(int i = 0; i < vec.size(); ++i){
        if(i == vec.size() - 1 || vec[i] == vec[i+1]){
            int diff = (vec[i] - vec[0]) + (vec.back() - vec[i]);
            if(diff < minDiff){
                minDiff = diff;
                pos = i;
            }
        }
    }
    
    std::vector<int> leftVec(vec.begin(), vec.begin()+pos+1);
    std::vector<int> rightVec(vec.begin()+pos, vec.end());
    
    return {leftVec, rightVec};
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for(int i = 0; i < n; ++i){
        std::cin >> vec[i];
    }
    
    auto result = cutVector(vec);
    std::cout << "Left Vector: ";
    for(auto x : result[0]){
        std::cout << x << " ";
    } std::cout << std::endl;
    std::cout << "Right Vector: ";
    for(auto x : result[1]){
        std::cout << x << " ";
    } std::cout << std::endl;
    
    return 0;
}
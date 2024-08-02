#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, target;
    std::cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cin >> target;
    
    map<int, int> numMap;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            std::cout << complement << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        numMap[nums[i]] = i;
    }
    
    return 0;
}
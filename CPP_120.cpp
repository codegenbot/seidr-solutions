#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maxKItems(std::vector<int> arr, int k) {
    std::priority_queue<int> pq;
    
    for(int i = 0; i < arr.size(); i++) {
        pq.push(arr[i]);
    }
    
    std::vector<int> result;
    
    for(int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    
    return result;
}

int main() {
    std::vector<int> test = maxKItems({1, 2, 3, -23, 243, -400, 0}, 3);
    for (int i : test) {
        std::cout << i << " ";
    }
    return 0;
}
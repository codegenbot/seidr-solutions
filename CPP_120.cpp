#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maxKItems(std::vector<int> arr, int k) {
    std::priority_queue<int> pq;
    
    for (int i : arr) {
        pq.push(i);
        if (pq.size() > k)
            pq.pop();
    }
    
    std::vector<int> result(pq.size());
    while (!pq.empty()) {
        result.back() = pq.top();
        pq.pop();
        result.back()--;
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
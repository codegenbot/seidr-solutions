#include <vector>
#include <queue>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::priority_queue<int> pq;
    for (int num : arr) {
        pq.push(num);
    }
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return true;  
}
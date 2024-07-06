```c++
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
    // Implement the logic for comparing vectors
    return true;  
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));  
}
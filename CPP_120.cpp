#include <queue>
#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    std::vector<int> res(k);
    for (int i = k - 1; i >= 0; --i) {
        res[i] = pq.top();
        pq.pop();
    }
    return res;
}
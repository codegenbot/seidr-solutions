```cpp
#include <vector>
#include <queue>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
        if (pq.size() > k)
            pq.pop();
    }
    std::vector<int> result(k);
    for (int i = k - 1; i >= 0; --i)
        result[i] = pq.top(), pq.pop();
    return result;
}
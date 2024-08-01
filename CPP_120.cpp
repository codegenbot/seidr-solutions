```cpp
#include <vector>
#include <queue>

std::vector<int> maximum(std::vector<int> arr,int k){
    std::priority_queue<int> pq;
    for(int i:arr) pq.push(i);
    std::vector<int> res;
    for(int i=0; i<k; i++) res.push_back(pq.top()), pq.pop();
    return res;
}
#include <queue>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    priority_queue<int> pq;
    
    for (int x : arr) {
        pq.push(x);
    }
    
    for (int i = 0; i < k; i++) {
        result.push_back(pq.top());
        pq.pop();
    }
    
    return result;
}
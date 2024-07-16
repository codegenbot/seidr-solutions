Here is the completed code:

```cpp
vector<int> maximum(vector<int> arr,int k){
    priority_queue<int> pq(arr.begin(),arr.end());
    vector<int> res;
    for(int i = 0; i < k; i++){
        res.push_back(pq.top());
        pq.pop();
    }
    return res;
}
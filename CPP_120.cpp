Here is the completed code:

```cpp
vector<int> maximum(vector<int> arr,int k){
    vector<int> res(k);
    copy(std::make_heap(arr.begin(), arr.end()), std::greater<int>());
    for(int i = 0; i < k; ++i)
        res[i] = *std::next(std::begin(arr), i);
    return res;
}
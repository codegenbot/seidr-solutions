Here is the completed code:

```cpp
vector<int> maximum(vector<int> arr,int k){
    vector<int> result(arr.begin(),arr.end());
    sort(result.begin(),result.end());
    return vector<int>(result.begin(),result.begin()+k);
}
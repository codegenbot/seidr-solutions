```cpp
vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxSoFar = 0; 

    for(int i=0; i<n; i++){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return res;
}
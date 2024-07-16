```
vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxSoFar = 0; 
    for(int i=n-1; i>=0; i--){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return res;
}
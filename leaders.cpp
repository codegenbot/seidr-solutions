vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int maxRightSoFar = arr[n-1];  
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) { 
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];  
        }
    }
    
    return result;
}
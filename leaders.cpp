vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int maxRightSoFar = arr[n-1];  // initialize with rightmost element
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {  // check if current element is a leader
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];  // update the maximum right so far
        }
    }
    
    return result;
}
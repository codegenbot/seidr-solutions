std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int maxSoFar = arr[n-1];
    result.push_back(maxSoFar);
    
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            result.push_back(maxSoFar);
        }
    }
    
    std::reverse(result.begin(), result.end());
    return result;
}
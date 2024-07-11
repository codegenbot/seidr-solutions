```
vector<int> getLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int maxSoFar = arr.back(); // start with the last element as the initial max

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= maxSoFar) {
            result.push_back(arr[i]);
            maxSoFar = arr[i]; // update the max for the next iteration
        }
    }

    return result;
}
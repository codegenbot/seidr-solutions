vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRight = arr.back(); // initialize with the last element
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else
            maxRight = arr[i]; // update maxRight
    }
    return result;
}
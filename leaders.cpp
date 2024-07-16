std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int maxRight = arr[0]; // Initialize the maximum right element as the first element of the array

    for(int i=1; i<n; i++) { 
        if(arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    return result;
}
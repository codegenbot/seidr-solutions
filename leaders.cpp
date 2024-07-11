vector<std::vector<int>> leaders(std::vector<int>& arr) {
    vector<int> result;
    int maxRight = arr[arr.size() - 1];
    for(int i = arr.size() - 2; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    result.push_back(arr[arr.size() - 1]);
    return result;
}
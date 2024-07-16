std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) { 
        if(result.empty() || arr[i] >= arr[0]) {
            result.push_back(arr[i]);
        }
    }

    return result;
}
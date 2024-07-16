std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    if(n == 0) return result;

    int max_right = arr[n-1];
    result.push_back(max_right);

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= max_right) {
            result.push_back(arr[i]);
            max_right = arr[i];
        }
    }

    std::reverse(result.begin(), result.end());

    return result;
}
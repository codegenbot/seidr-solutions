std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    int maxRightSoFar = arr.back();

    for(int i=n-1; i>=0; i--) { 
        if(arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }

    return result;
}
std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int maxRightSoFar = arr[n-1];

    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
            res.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }

    return res;
}
std::vector<int> leaders(std::vector<int>& arr) {
    if(arr.empty()) return {};
    
    int n = arr.size();
    int leaderIndex = n - 1;
    std::vector<int> result;

    for(int i=n-2; i>=0; --i){
        while(leaderIndex > i && arr[leaderIndex] >= arr[i]){
            leaderIndex--;
        }
        if(i == leaderIndex) result.push_back(arr[i]);
    }

    return result;
}
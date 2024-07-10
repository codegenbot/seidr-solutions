std::vector<int> leaders(std::vector<int>& arr) {
    if (arr.size() == 0) return {};

    int maxRight = arr.back();
    std::vector<int> leaders;

    for(int i = arr.size()-2; i >= 0; --i){
        if(arr[i] >= maxRight){
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    return leaders;
}
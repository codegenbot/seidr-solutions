vector<int> pluck(vector<int> arr){
    int minEvenValue = INT_MAX;
    int minIndex = -1;
    
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }
    
    if(minIndex == -1) {
        return {};
    }
    
    return {minEvenValue, minIndex};
}
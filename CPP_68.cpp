vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result = {{-1, -1}};
    
    if(arr.empty()) return result;
    
    int smallestEvenIndex = 0, smallestEvenValue = arr[0];
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2==0 && arr[i] < smallestEvenValue){
            smallestEvenValue = arr[i]; 
            smallestEvenIndex = i;
        }
    }
    
    result.clear();
    result.push_back({smallestEvenValue, smallestEvenIndex});
    
    return result;
}
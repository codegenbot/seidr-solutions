vector<int> pluck(vector<int> arr){
    vector<int> result;
    int minEvenValue = INT_MAX;
    int minEvenIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < minEvenValue){
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }
    
    if(minEvenIndex != -1){
        result.push_back(minEvenValue);
        result.push_back(minEvenIndex);
    }
    
    return result;
}
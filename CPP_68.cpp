vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestValue = -1;
    int smallestIndex = -1;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallestValue == -1 || arr[i] < smallestValue)){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestValue != -1){
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}
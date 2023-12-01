vector<int> pluck(vector<int> arr){
    int smallestValue = INT_MAX;
    int smallestIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestValue){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if(smallestIndex != -1){
        return {smallestValue, smallestIndex};
    }
    else{
        return {};
    }
}
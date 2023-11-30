vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = INT_MAX;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < smallestValue){
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }

    if(smallestValue != INT_MAX){
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }

    return result;
}
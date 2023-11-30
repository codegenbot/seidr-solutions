vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestValue = -1;
    int smallestIndex = -1;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0){ // check if the node is even
            if(smallestValue == -1 || arr[i] < smallestValue){ // check if it is the smallest even value so far
                smallestValue = arr[i];
                smallestIndex = i;
            }
        }
    }
    
    if(smallestValue != -1){ // if there is an even value found
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}
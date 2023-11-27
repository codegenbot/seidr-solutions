bool move_one_ball(vector<int> arr){
    if(arr.empty()){
        return true;
    }
    
    int n = arr.size();
    int minIndex = -1;
    int minVal = INT_MAX;
    
    // Find the minimum element in the array
    for(int i=0; i<n; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
            minIndex = i;
        }
    }
    
    // Check if the array is already sorted in non-decreasing order
    bool sorted = true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            sorted = false;
            break;
        }
    }
    
    // If the array is already sorted, return true
    if(sorted){
        return true;
    }
    
    // Check if the array can be sorted by performing right shift operations
    for(int i=0; i<n; i++){
        int index = (minIndex + i) % n;
        if(arr[index] > arr[(index+1) % n]){
            return false;
        }
    }
    
    return true;
}
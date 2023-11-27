bool move_one_ball(vector<int> arr){
    if(arr.empty()){
        return true;
    }
    
    int n = arr.size();
    int min_index = 0;
    
    // Find the index of the minimum element in the vector
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[min_index]){
            min_index = i;
        }
    }
    
    // Check if the vector is already sorted in non-decreasing order
    bool sorted = true;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            sorted = false;
            break;
        }
    }
    
    // If the vector is already sorted or the minimum element is at the start
    // of the vector, return true
    if(sorted || min_index == 0){
        return true;
    }
    
    // Otherwise, check if the vector can be sorted by performing right shift
    // operations
    for(int i = 0; i < n; i++){
        int index = (min_index + i) % n;
        
        if(arr[index] < arr[(index + n - 1) % n]){
            return false;
        }
    }
    
    return true;
}
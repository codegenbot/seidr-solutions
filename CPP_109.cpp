bool move_one_ball(vector<int> arr){
    if(arr.empty()){
        return true;
    }
    
    int n = arr.size();
    int minIndex = 0;
    int minValue = arr[0];
    
    // Find the minimum element in the vector
    for(int i=1; i<n; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
            minIndex = i;
        }
    }
    
    // Check if the vector is already sorted in non-decreasing order
    bool isSorted = true;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;
            break;
        }
    }
    
    // If the vector is already sorted, return true
    if(isSorted){
        return true;
    }
    
    // Check if it is possible to get non-decreasing order by performing right shift operations
    for(int i=0; i<n; i++){
        int newIndex = (minIndex + i) % n;
        if(arr[newIndex] < arr[(newIndex-1+n)%n]){
            return false;
        }
    }
    
    return true;
}
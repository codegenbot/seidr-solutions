bool move_one_ball(vector<int> arr){
    if(arr.empty()){
        return true;
    }
    
    int n = arr.size();
    int minIndex = 0;
    
    for(int i=1; i<n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    
    int requiredShifts = n - minIndex;
    
    for(int i=0; i<n; i++){
        int newIndex = (i + requiredShifts) % n;
        if(arr[newIndex] != i+1){
            return false;
        }
    }
    
    return true;
}
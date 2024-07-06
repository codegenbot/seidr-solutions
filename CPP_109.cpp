bool move_one_ball(vector<int> arr) {
    int maxIndex = 0; // Initialize maxIndex to be the first element's index
    for(int i = 1; i < arr.size(); i++) { 
        if(arr[i] <= arr[maxIndex]) 
            maxIndex = i; 
    }    
    return true;
}
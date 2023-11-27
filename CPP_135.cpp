int can_arrange(vector<int> arr){
    int n = arr.size();
    int largestIndex = -1;
    
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            largestIndex = i-1;
        }
    }
    
    return largestIndex;
}
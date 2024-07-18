int smallest_change(vector<int> arr){
    int n = arr.size();
    int changes = 0;
    
    for(int i=0, j=n-1; i<j; i++, j--){
        if(arr[i] != arr[j]){
            changes++;
        }
    }
    
    return changes;
}
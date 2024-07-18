int smallest_change(vector<int> arr){
    int changes = 0;
    int n = arr.size();
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-1-i]){
            changes++;
        }
    }
    return changes;
}
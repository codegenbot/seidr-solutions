int n = arr.size();
    int idx = -1;
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]){
            idx = i-1;
        }
    }
    return idx;
}
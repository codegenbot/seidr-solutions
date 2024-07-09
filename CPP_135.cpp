```
int can_arrange(vector<int> arr) {
    int n = arr.size();
    if(n <= 1) return -1;
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i])
            return -1;
    }
    return n-1;
}
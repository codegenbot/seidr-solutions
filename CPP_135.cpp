int can_arrange(vector<int> arr){
    for(int i = arr.size() - 1; i >= 1; i--){
        if(arr[i] < arr[i-1]){
            return i - 1;
        }
    }
    return -1;
}
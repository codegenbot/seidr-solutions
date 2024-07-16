int can_arrange(vector<int> arr){
    for(int i = arr.size()-1; i > 0; i--){
        if(arr[i-1] < arr[i]){
            return i-1;
        }
    }
    return -1;
}
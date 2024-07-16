int can_arrange(vector<int> arr){
    int res = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            res = i - 1;
        }
    }
    return res;
}
int can_arrange(vector<int> arr){
    int i;
    for(i=1; i<arr.size(); i++){
        if(arr[i-1] > arr[i])
            return -1;
    }
    return i;
}
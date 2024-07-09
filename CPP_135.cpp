int can_arrange(vector<int> arr){
    int last = -1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] <= last)
            return -1;
        last = arr[i];
    }
    return 1;
}
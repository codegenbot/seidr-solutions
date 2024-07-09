int can_arrange(vector<int> arr){
    int max = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < max)
            return -1;
        max = arr[i];
    }
    return 1;
}
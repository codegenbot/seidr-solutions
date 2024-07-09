int can_arrange(vector<int> arr){
    int i = 0;
    while(i < arr.size() && (i == 0 || arr[i-1] <= arr[i])){
        i++;
    }
    return i;
}
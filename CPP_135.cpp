int can_arrange(vector<int> arr){
    int i = 0;
    while(i < arr.size()){
        if(i==0 || arr[i-1] <= arr[i])
            i++;
        else
            return -1;
    }
    return i;
}
int can_arrange(vector<int> arr){
    int index = -1;
    for(int i=0; i<arr.size(); i++){
        if(i==0 || arr[i-1] <= arr[i])
            index = i;
    }
    return index;
}
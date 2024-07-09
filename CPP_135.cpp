int can_arrange(vector<int> arr){
    int last_non_decreasing_index = -1;
    for(int i=0; i<arr.size(); i++){
        if(i==0 || arr[i-1] <= arr[i])
            last_non_decreasing_index = i;
        else
            break;
    }
    return last_non_decreasing_index;
}
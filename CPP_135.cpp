int can_arrange(vector<int> arr){
    int largest_index = -1;
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] > arr[i]){
            largest_index = i-1;
        }
    }
    return largest_index;
}
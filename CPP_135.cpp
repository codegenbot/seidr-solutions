int can_arrange(vector<int> arr){
    int maxIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            maxIndex = i - 1;
        }
    }
    return maxIndex;
}
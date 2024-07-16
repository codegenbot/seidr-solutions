int can_arrange(vector<int> arr){
    int ans = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            ans = i - 1;
        }
    }
    return ans;
}
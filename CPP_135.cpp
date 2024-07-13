Here is the solution:

int can_arrange(vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] <= arr[i]){
            return i;
        }
    }
    return -1;
}
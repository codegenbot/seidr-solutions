Here is the solution:

int can_arrange(vector<int> arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i+1] <= arr[i]) return i;
    }
    return -1;
}
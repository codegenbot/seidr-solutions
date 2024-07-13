Here is the solution:

int can_arrange(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        if(i==0 || arr[i-1] <= arr[i]){
            return i;
        }
    }
    return -1;
}
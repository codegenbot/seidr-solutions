int can_arrange(vector<int> arr){
    int output = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            output = i - 1;
        }
    }
    return output;
}
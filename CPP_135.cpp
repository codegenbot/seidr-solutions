int can_arrange(vector<int> arr){
    int index = -1;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] <= arr[i - 1]) {
            index = i - 1;
        }
    }
    return index;
}
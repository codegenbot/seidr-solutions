Here is the completed code:

int can_arrange(vector<int> arr){
    int i = 0;
    while(i < arr.size() - 1 && (arr[i] <= arr[i + 1])){
        i++;
    }
    return i == 0 ? -1 : i - 1;
}
```cpp
int can_arrange(vector<int> arr){
    int i = 0;
    while(i < arr.size() - 1) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            i = 0; // reset the index
        } else {
            i++;
        }
    }
    return 1;
}
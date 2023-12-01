int smallest_change(vector<int> arr){
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int count = 0;
    
    while (left < right) {
        if (arr[left] != arr[right]) {
            count++;
        }
        left++;
        right--;
    }
    
    return count;
}
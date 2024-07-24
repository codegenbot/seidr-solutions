```
int add_elements(vector<int> arr, int k) {
    if (k < 1 || arr.empty())
        return -1; 
    int sum = 0;
    for (int i = 0; i < min(k, (int)arr.size()); i++) {
        if ((arr[i] >= 10 && arr[i] <= 99)) {
            sum += arr[i];
        }
    }
    return sum;
}
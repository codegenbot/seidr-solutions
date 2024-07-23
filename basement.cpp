```
int basement(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += arr[j];
            if (sum < 0)
                return j;
        }
    }
    return -1;
}
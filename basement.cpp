int basementIndex(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; ; i++) {
        sum += arr[i];
        if (sum < 0)
            return i;
    }
}
int n = arr.size();
    int count = 0;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            count++;
        }
    }
    return count;
}
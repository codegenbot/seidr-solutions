int n = arr.size();
    int sortedIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            sortedIndex = i;
            break;
        }
    }
    return (sortedIndex == 0 || (arr.back() <= arr.front() && sortedIndex == n-1));
}
```
vector<int> pluck(vector<int> arr) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] <= smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    return {smallestEven, smallestIndex};
}
```
vector<int> pluck(vector<int> arr) {
    int smallestEven = -1;
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (smallestEven == -1 || arr[i] < smallestEven) {
                smallestEven = arr[i];
                index = i;
            }
        }
    }

    if (smallestEven == -1) {
        return {};
    } else {
        return {smallestEven, index};
    }
}
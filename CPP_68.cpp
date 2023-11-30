vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallestEven = -1;
    int smallestEvenIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            if (smallestEven == -1 || arr[i] < smallestEven) {
                smallestEven = arr[i];
                smallestEvenIndex = i;
            }
        }
    }

    if (smallestEvenIndex != -1) {
        result.push_back(smallestEven);
        result.push_back(smallestEvenIndex);
    }

    return result;
}
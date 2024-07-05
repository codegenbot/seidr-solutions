vector<int> pluck(vector<int> arr) {
    int minEvenIndex = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && (minEvenIndex == -1 || arr[i] < arr[minEvenIndex])) {
            minEvenIndex = i;
        }
    }
    if (minEvenIndex == -1) {
        return {};
    }
    return {arr[minEvenIndex], minEvenIndex};
}
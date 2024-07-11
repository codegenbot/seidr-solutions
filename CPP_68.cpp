vector<int> pluck(vector<int> arr){
    int smallestValue = -1, smallestIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallestValue == -1 || arr[i] < smallestValue || (arr[i] == smallestValue && i < smallestIndex))) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    if (smallestValue != -1) {
        return {smallestValue, smallestIndex};
    } else {
        return {};
    }
}
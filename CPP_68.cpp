vector<int> pluck(vector<int> arr) {
    int minEven = -1;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (minEven == -1 || arr[i] < minEven) {
                minEven = arr[i];
                minIndex = i;
            }
        }
    }
    
    if (minEven == -1) {
        return {};
    } else {
        return {minEven, minIndex};
    }
}
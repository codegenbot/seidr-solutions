vector<int> pluck(vector<int> arr) {
    int minEvenValue = -1;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (minEvenValue == -1 || arr[i] < minEvenValue) {
                minEvenValue = arr[i];
                minIndex = i;
            }
        }
    }
    
    if (minEvenValue == -1) {
        return {};
    } else {
        return {minEvenValue, minIndex};
    }
}
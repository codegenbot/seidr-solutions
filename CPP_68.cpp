vector<int> pluck(vector<int> arr){
    int smallestEvenValue = -1;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (smallestEvenValue == -1 || arr[i] < smallestEvenValue) {
                smallestEvenValue = arr[i];
                smallestIndex = i;
            }
        }
    }
    
    if (smallestEvenValue == -1) {
        return {};
    }
    
    return {smallestEvenValue, smallestIndex};
}
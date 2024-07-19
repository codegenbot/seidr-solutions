int smallest_change(vector<int> arr){
    int count = 0;
    for (int i = 0; i < arr.size() / 2; ++i) {
        if (arr[i] != arr[arr.size() - 1 - i])
            ++count;
    }
    return count;
}
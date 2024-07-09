int smallest_change(vector<int> arr){
    int changes = 0;
    for (int i = 0; i < arr.size() / 2; ++i) {
        if (arr[i] != arr[arr.size() - 1 - i]) {
            ++changes;
        }
    }
    return changes;
}
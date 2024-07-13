vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    for (int i = arr.size() - 1; i > 0; i--) {
        int rightMax = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] <= rightMax)
            j--;
        if (j == -1) 
            result.push_back(arr[i]);
    }
    return result;
}
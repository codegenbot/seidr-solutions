bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result = arr;
    sort(result.begin(), result.end());
    for (int i = 0; i < k; i++) {
        cout << "Maximum number at position " << i << ": " << result[i] << endl;
    }
    return result;
}
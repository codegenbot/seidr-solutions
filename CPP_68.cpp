Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int minEven = INT_MAX; // Initialize with maximum possible value
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) { // Check if the node is even and smaller than current minimum
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back(minEven);
        result.push_back(minIndex);
    } else {
        result.push_back({});
    }

    return result;
}
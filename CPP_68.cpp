Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int minEvenValue = INT_MAX; // Initialize with maximum possible value
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) { // Check if the node is even and smaller than current minimum
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back(minEvenValue);
        result.push_back(minIndex);
    } else {
        result.push_back(0);
        result.push_back(-1); // Return 0 as the smallest value and -1 as its index
    }

    return result;
}
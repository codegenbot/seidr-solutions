Here is the solution:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            result = {smallest, i};
        }
    }

    return result;
}
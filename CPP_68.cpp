Here is the completed code:

vector<int> pluck(vector<int> arr) {
    if(arr.empty()) return {};

    int smallestEven = INT_MAX;
    int idx = -1;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            idx = i;
        }
    }

    return {(smallestEven), (idx)};
}
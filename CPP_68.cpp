Here is the completed code:

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if(arr.empty()) return result;

    int smallestEven = INT_MAX;
    int index = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    result.push_back(smallestEven);
    result.push_back(index);

    return result;
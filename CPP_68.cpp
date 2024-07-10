Here is the completed code:

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int minEvenIndex = -1;
    int minValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minValue) {
            minValue = arr[i];
            minEvenIndex = i;
        } else if (arr[i] % 2 == 0 && arr[i] == minValue) {
            minEvenIndex = i;
        }
    }

    return {{minValue, minEvenIndex}};
}
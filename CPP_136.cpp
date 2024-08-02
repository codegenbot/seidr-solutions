vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result = {0, 0};
    int maxNeg = INT_MIN;
    int minPos = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    result[0] = maxNeg;
    result[1] = minPos;

    return result;
}
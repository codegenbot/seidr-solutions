Here is the completed code:

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2);
    int maxNegative = 0;
    int minPositive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        } else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }

    result[0] = maxNegative;
    result[1] = minPositive;

    return result;
}
Here is the solution:

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNegative = 0, minPositive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        } else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }
    return {(maxNegative > 0) ? maxNegative : 0, (minPositive < 1) ? minPositive : 0};
}
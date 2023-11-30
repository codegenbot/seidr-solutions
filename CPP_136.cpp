vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result(2, 0); // Initialize result vector with 0

    int largestNegative = INT_MIN;
    int smallestPositive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > largestNegative) {
            largestNegative = num;
        }
        if (num > 0 && num < smallestPositive) {
            smallestPositive = num;
        }
    }

    result[0] = largestNegative;
    result[1] = smallestPositive;

    return result;
}
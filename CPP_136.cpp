vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2, 0); // Initialize the result vector with two zeros

    int largestNeg = INT_MIN; // Initialize the largest negative integer as minimum possible value
    int smallestPos = INT_MAX; // Initialize the smallest positive integer as maximum possible value

    for (int num : lst) {
        if (num < 0 && num > largestNeg) {
            largestNeg = num; // Update largest negative integer if a larger one is found
        } else if (num > 0 && num < smallestPos) {
            smallestPos = num; // Update smallest positive integer if a smaller one is found
        }
    }

    result[0] = (largestNeg == INT_MIN) ? 0 : largestNeg; // If no negative integer found, set it as 0
    result[1] = (smallestPos == INT_MAX) ? 0 : smallestPos; // If no positive integer found, set it as 0

    return result;
}
vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2, 0); // Initialize result vector with 0
    int largestNegative = INT_MIN; // Set largestNegative to lowest possible integer
    int smallestPositive = INT_MAX; // Set smallestPositive to highest possible integer
    
    // Iterate through the input vector
    for (int num : lst) {
        if (num < 0 && num > largestNegative) { // Check if the current number is negative and larger than current largestNegative
            largestNegative = num; // Update largestNegative
        } else if (num > 0 && num < smallestPositive) { // Check if the current number is positive and smaller than current smallestPositive
            smallestPositive = num; // Update smallestPositive
        }
    }
    
    result[0] = largestNegative; // Assign largestNegative to the first element of the result vector
    result[1] = smallestPositive; // Assign smallestPositive to the second element of the result vector
    
    return result; // Return the result vector
}
Here is the solution:

int prod_signs(vector<int> arr) {
    long long res = 1; // Initialize result as 1
    int zeroCount = 0; // Count of zeros in array
    
    for (int num : arr) {
        if (num == 0) {
            zeroCount++; // If number is zero, increment count
        } else {
            res *= num / abs(num); // Multiply result by sign of number
        }
    }
    
    return (zeroCount > 1 || (arr.empty())) ? -32768 : res; // Return -32768 for empty array or more than one zeros
}
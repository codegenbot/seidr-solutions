int prod_signs(vector<int> arr){
    long long res = 1; // Initialize result as 1
    for(int num : arr){ // Iterate over each number in the array
        if(num != 0) // Check if the number is not zero
            res *= (num > 0 ? 1 : -1); // Multiply the sign of the number to the result
    }
    return abs(res) == 0 ? -32768 : res; // Return -32768 for empty array or 0, else return the absolute value
}
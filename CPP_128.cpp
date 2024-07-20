int prod_signs(vector<int> arr){
    int res = 1; // Initialize result as 1
    for(int num : arr){ // Iterate over each number in the array
        if(num == 0) return -32768; // Return -32768 if array contains zero
        res *= (num > 0 ? 1 : ((num < 0) ? -1 : 0)); // Update result with product of signs
    }
    return res;
}
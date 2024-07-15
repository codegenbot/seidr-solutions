int prod_signs(vector<int> arr){
    int product = 1; // Initialize product with 1
    long long sum = 0; // Initialize sum with 0
    
    if(arr.empty()) return -32768; // Return -32768 for empty array
    
    for(int num : arr){ 
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0)); // Update the product by multiplying it with sign of the number
        sum += abs(num); // Add absolute value of the number to the sum
    }
    
    return product * sum; // Return product of signs multiplied by sum of magnitudes
}
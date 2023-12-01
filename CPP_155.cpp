vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    
    // Convert the integer to string
    string strNum = to_string(num);
    
    // Iterate over each digit in the string
    for(char c : strNum){
        // Convert the digit back to integer
        int digit = c - '0';
        
        // Check if the digit is even or odd
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    // Create and return the vector with even and odd counts
    vector<int> result = {evenCount, oddCount};
    return result;
}
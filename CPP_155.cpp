vector<int> even_odd_count(int num){
    vector<int> count(2, 0); // Initialize count vector with 2 elements, both set to 0
    
    while (num != 0) {
        int digit = abs(num % 10); // Get the last digit of the number
        if (digit % 2 == 0) {
            count[0]++; // Increment count of even digits
        } else {
            count[1]++; // Increment count of odd digits
        }
        num /= 10; // Remove the last digit from the number
    }
    
    return count;
}
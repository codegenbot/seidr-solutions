vector<int> even_odd_count(int num){
    vector<int> count(2, 0); // initialize count vector with 0 for even and odd digits
    string numStr = to_string(abs(num)); // convert the absolute value of num to string
    for (char c : numStr) {
        int digit = c - '0'; // convert char to int
        if (digit % 2 == 0) {
            count[0]++; // increment even count if digit is even
        } else {
            count[1]++; // increment odd count if digit is odd
        }
    }
    return count;
}
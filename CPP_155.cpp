vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    num = abs(num); // Get the absolute value of the number
    
    while(num != 0){
        digit = num % 10; // Get the rightmost digit
        if(digit % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
        num /= 10; // Remove the rightmost digit
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}
vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numString = to_string(abs(num));
    
    for(char digit : numString){
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}
vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));
    
    for(char digit : numStr){
        int digitValue = digit - '0';
        if(digitValue % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}
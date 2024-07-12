vector<int> even_odd_count(int num){
    int evenCount = 0, oddCount = 0;
    string numStr = to_string(abs(num));
    
    for(char digit : numStr){
        if((digit - '0') % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}
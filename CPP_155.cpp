vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));
    
    for(int i = 0; i < numStr.length(); i++){
        int digit = numStr[i] - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}
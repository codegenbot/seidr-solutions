vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string strNum = to_string(abs(num));
    for(char c : strNum){
        int digit = c - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    return {evenCount, oddCount};
}
vector<int> counts(2, 0);
    
    string numStr = to_string(abs(num));
    
    for(char c : numStr){
        int digit = c - '0';
        if(digit % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    
    return counts;
}
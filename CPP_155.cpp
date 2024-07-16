string numStr = to_string(abs(num));
    vector<int> count = {0, 0};
    
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            count[0]++;
        } else {
            count[1]++;
        }
    }
    
    return count;
}
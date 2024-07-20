string numStr = to_string(abs(num));
    vector<int> counts = {0, 0};
    for(char digit : numStr){
        if((digit - '0') % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}
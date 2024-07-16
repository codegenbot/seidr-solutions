vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for(char digit : numStr){
        int d = digit - '0';
        if(d % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}
vector<int> even_odd_count(int num){
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for(int i=0; i<numStr.size(); i++){
        int digit = numStr[i] - '0';
        if(digit % 2 == 0){
            counts[0]++;
        } else{
            counts[1]++;
        }
    }
    if(num < 0){
        counts[0]++; // increment the count of even digits by 1 because of the negative sign
    }
    return counts;
}
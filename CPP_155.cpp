vector<int> counts = {0, 0};
    
    while(num != 0){
        int digit = abs(num) % 10;
        if(digit % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
        num /= 10;
    }
    
    return counts;
}
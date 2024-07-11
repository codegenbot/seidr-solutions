vector<int> stones;
    while(n > 0){
        stones.push_back(n);
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
    }
    return stones;
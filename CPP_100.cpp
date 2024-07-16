vector<int> stones;
    stones.push_back(n);
    for(int i = 2; i <= n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}
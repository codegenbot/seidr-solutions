vector<int> stones;
    int level_stones = n;

    for(int i=0; i<n; i++){
        stones.push_back(level_stones);
        if(level_stones % 2 == 0){
            level_stones += 1;
        } else {
            level_stones += 2;
        }
    }

    return stones;
}
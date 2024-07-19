vector<int> stones;
    stones.push_back(n);
    for(int i=0; i<n-1; i++){
        if(n % 2 == 0){
            n += 2;
        }else{
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}
vector<int> stones;
stones.push_back(n);
for(int i=1; i<n; i++){
    if(n%2 == 0)
        stones.push_back(n + i*2);
    else
        stones.push_back(n + i*2 - 1);
}
return stones;
}
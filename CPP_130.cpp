vector<int> tri(int n){
    vector<int> sequence(n+1);
    
    if(n >= 0)
        sequence[0] = 1;
    if(n >= 1)
        sequence[1] = 3;
    if(n >= 2)
        sequence[2] = 2;
    
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0)
            sequence[i] = 1 + i / 2;
        else
            sequence[i] = sequence[i - 1] + sequence[i - 2] + sequence[i + 1];
    }
    
    return sequence;
}
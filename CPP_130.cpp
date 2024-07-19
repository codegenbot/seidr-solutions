vector<int> tri(int n){
    vector<int> tribonacci(n+1);
    tribonacci[0] = 3;
    if(n > 0) tribonacci[1] = 1;
    if(n > 1) tribonacci[2] = 3;
    
    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0){
            tribonacci[i] = 1 + i / 2;
        } else {
            tribonacci[i] = tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3];
        }
    }
    
    return tribonacci;
}
vector<int> result;
    result.push_back(3);
    if(n == 0) return result;
    
    result.push_back(1);
    if(n == 1) return result;
    
    result.push_back(2);
    if(n == 2) return result;
    
    int a = 3, b = 1, c = 2;
    for(int i = 3; i <= n; ++i){
        int next;
        if(i % 2 == 0){
            next = 1 + i / 2;
        } else {
            next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        result.push_back(next);
    }
    
    return result;
}
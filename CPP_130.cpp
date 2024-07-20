vector<int> result;
    if(n == 0){
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    if(n == 1){
        return result;
    }
    result.push_back(1);
    if(n == 2){
        return result;
    }
    result.push_back(2);
    int prev1 = 3, prev2 = 2, prev3 = 1;
    for(int i = 4; i <= n + 1; i++){
        int current;
        if(i % 2 == 0){
            current = 1 + i / 2;
        } else {
            current = prev1 + prev2 + prev3;
        }
        result.push_back(current);
        prev3 = prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return result;
}
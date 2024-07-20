vector<int> result;
    if(n == 0){
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
    int prev1 = 1, prev2 = 1, prev3 = 2;
    for(int i = 3; i <= n; i++){
        int current = (i % 2 == 0) ? 1 + i / 2 : prev1 + prev2 + prev3;
        result.push_back(current);
        prev1 = prev2;
        prev2 = prev3;
        prev3 = current;
    }
    return result;
}
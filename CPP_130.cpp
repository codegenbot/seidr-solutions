vector<int> result;
    if(n == 0){
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    if(n == 1){
        result.push_back(3);
        return result;
    }
    result.push_back(1);
    int prev = 3, prev_prev = 3;
    for(int i = 2; i <= n; ++i){
        if(i % 2 == 0){
            result.push_back(1 + i/2);
        }
        else{
            int current = prev + prev_prev + result[i-2]; 
            result.push_back(current);
            prev_prev = prev;
            prev = current;
        }
    }
    return result;
}
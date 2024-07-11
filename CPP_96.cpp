vector<int> result;
    if(n < 2){
        return result;
    }
    bool isPrime;
    for(int i = 2; i < n; ++i){
        isPrime = true;
        for(int j = 2; j*j <= i; ++j){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            result.push_back(i);
        }
    }
    return result;
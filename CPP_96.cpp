vector<int> result;
    for(int num = 2; num < n; num++){
        bool is_prime = true;
        for(int i = 2; i*i <= num; i++){
            if(num % i == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            result.push_back(num);
        }
    }
    return result;
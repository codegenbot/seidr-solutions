vector<int> prime_numbers;
    for(int i = 2; i < n; ++i){
        bool is_prime = true;
        for(int j = 2; j * j <= i; ++j){
            if(i % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            prime_numbers.push_back(i);
        }
    }
    return prime_numbers;
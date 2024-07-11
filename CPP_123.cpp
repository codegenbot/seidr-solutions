vector<int> odd_collatz;
    while(n != 1){
        odd_collatz.push_back(n);
        n = (n % 2 == 0) ? n / 2 : (3 * n) + 1;
    }
    odd_collatz.push_back(1);
    vector<int> result;
    for(int num : odd_collatz){
        if(num % 2 != 0){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}
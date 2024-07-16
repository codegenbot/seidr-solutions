vector<int> res;
    while(n != 1){
        res.push_back(n);
        n = (n % 2 == 0) ? n/2 : 3*n + 1;
    }
    res.push_back(1);

    vector<int> odd_nums;
    for(int num : res){
        if(num % 2 != 0){
            odd_nums.push_back(num);
        }
    }
    
    sort(odd_nums.begin(), odd_nums.end());
    return odd_nums;
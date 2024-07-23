vector<int> res;
    for(int i=a; i<=b; i++){
        if(i % 2 == 0){
            res.push_back(i);
        }
    }
    return res;
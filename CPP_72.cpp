int sum = 0;
    for(int i : q){
        sum += i;
    }
    return sum <= w && equal(q.begin(), q.end(), q.rbegin());
}
int sum = 0;
    for(int elem : q)
        sum += elem;
    
    if (sum <= w && equal(q.begin(), q.begin() + q.size()/2, q.rbegin()))
        return true;
    return false;
}
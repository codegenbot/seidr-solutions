int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (equal(q.begin(), q.end(), q.rbegin()) && sum <= w) {
        return true;
    } else {
        return false;
    }
}
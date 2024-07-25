int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum > w) {
        return false;
    }
    
    vector<int> temp = q;
    reverse(temp.begin(), temp.end());
    
    if (q == temp) {
        return true;
    }
    
    return false;
}
int sum = 0;
for (int i = 0; i < q.size(); i++) {
    sum += q[i];
}

if (sum <= w) {
    vector<int> reverse_q = q;
    reverse(reverse_q.begin(), reverse_q.end());
    
    return q == reverse_q;
}

return false;
}
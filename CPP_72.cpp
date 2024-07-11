int sum = 0;
for (int num : q) {
    sum += num;
}

if (sum <= w) {
    vector<int> reversed_q = q;
    reverse(reversed_q.begin(), reversed_q.end());
    if (q == reversed_q) {
        return true;
    }
}

return false;
}
int accumulate(const vector<int>& q) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    return sum;
}

bool is_palindrome(const vector<int>& q) {
    vector<int> temp = q;
    reverse(temp.begin(), temp.end());
    return temp == q;
}
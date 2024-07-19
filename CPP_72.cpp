bool is_palindrome(const vector<int>& q) {
    vector<int> temp = q;
    reverse(temp.begin(), temp.end());
    return temp == q;
}

bool will_it_fly(const vector<int> &q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    
    if (sum <= w && is_palindrome(q)) {
        return true;
    }
    
    return false;
}
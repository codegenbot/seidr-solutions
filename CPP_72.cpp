bool is_palindrome(const vector<int> &v) {
    return equal(v.begin(), v.begin() + v.size() / 2, v.rbegin());
}

int accumulate(const vector<int> &v) {
    return accumulate(v.begin(), v.end(), 0);
}

bool will_it_fly(const vector<int> &q, int w) {
    int sum = accumulate(q);
    
    if (sum <= w && is_palindrome(q)) {
        return true;
    }
    
    return false;
}
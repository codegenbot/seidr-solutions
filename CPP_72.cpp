bool will_it_fly(vector<int> q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    if (sum <= w && is_palindrome(q)) {
        return true;
    }
    return false;
}

bool is_palindrome(vector<int>& q) {
    vector<int> temp = q;
    reverse(temp.begin(), temp.end());
    return temp == q;
}

// In main:
assert(will_it_fly({5}, 5) == true);
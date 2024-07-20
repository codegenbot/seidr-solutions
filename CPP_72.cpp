bool will_it_fly(vector<int> q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    if (sum <= w && is_palindrome(q)) {
        return true;
    }
    return false;
}
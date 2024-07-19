int accumulate(vector<int>::const_iterator first, vector<int>::const_iterator last, int init) {
    int result = init;
    for (auto it = first; it != last; ++it) {
        result += *it;
    }
    return result;
}

bool is_palindrome(const vector<int>& q) {
    vector<int> temp = q;
    reverse(temp.begin(), temp.end());
    return temp == q;
}
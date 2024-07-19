bool is_palindrome(const vector<int>& vec) {
    return equal(vec.begin(), vec.begin() + vec.size() / 2, vec.rbegin());
}

int accumulate(const vector<int>& vec, int initial) {
    return accumulate(vec.begin(), vec.end(), initial);
}
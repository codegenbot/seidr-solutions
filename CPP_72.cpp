bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int x : q) {
        str += to_string(x);
    }
    return isPalindrome(str) && accumulate(q.begin(), q.end(), 0) <= w;
}

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
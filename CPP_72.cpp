bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return is_palindrome(str) && q.size() <= w;
}

bool is_palindrome(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
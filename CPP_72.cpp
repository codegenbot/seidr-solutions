bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return isPalindrome(str) && isLessEqualSum(w);
}

bool isPalindrome(string s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return s == reversed;
}

bool isLessEqualSum(int w, vector<int> q) {
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}
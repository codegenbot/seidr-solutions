bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return palindromic(str) && sum(q) <= w;
}

bool palindromic(string s) {
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

int sum(vector<int> q) {
    int total = 0;
    for (int i : q) {
        total += i;
    }
    return total;
}
Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return palindrome(str) && sum(q) <= w;
}

bool palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int sum(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        sum += i;
    }
    return sum;
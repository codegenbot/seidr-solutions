Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (!str.equals(reverse(str))) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

string reverse(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}
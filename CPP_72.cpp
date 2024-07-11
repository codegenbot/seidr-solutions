Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    if (s != s.substr(0, s.length() - 1) && s != s) return false;
    long sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}
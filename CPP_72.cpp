Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != stringify(str)) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

string stringify(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev ? "" : "not ";
}
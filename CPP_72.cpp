Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != toString(reverse(str))) {
        return false;
    }
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

string toString(vector<int> v) {
    string str = "";
    for (int i : v) {
        str += to_string(i);
    }
    return str;
}

vector<int> reverse(string s) {
    vector<int> res;
    for (int i = s.length() - 1; i >= 0; i--) {
        res.push_back(s[i] - '0');
    }
    return res;
}
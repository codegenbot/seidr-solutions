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
    string s = "";
    for (int i : v) {
        s += to_string(i);
    }
    return s;
}

vector<int> reverse(string str) {
    vector<int> result;
    for (int i = str.length() - 1; i >= 0; --i) {
        result.push_back(str[i] - '0');
    }
    return result;
}
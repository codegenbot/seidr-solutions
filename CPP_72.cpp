bool will_it_fly(vector<int> q, int w) {
    vector<string> strQ;
    for (int i : q) {
        strQ.push_back(to_string(i));
    }
    string s = "";
    for (string t : strQ) {
        s += t;
    }
    reverse(s.begin(), s.end());
    if (s != string(strQ.begin(), strQ.end())) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}
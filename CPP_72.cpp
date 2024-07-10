bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int i : q) {
        s += to_string(i);
    }
    bool balanced = s == reverse(s).str();
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return balanced && sum <= w;
}
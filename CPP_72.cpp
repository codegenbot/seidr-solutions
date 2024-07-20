bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = true;
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) {
            balanced = false;
            break;
        }
    }
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}
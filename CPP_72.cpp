bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool is_balanced = str == string(rbegin(str), rend(str));
    return is_balanced && accumulate(q.begin(), q.end(), 0) <= w;
}
Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = str == string(rbegin(str), rend(str));
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}
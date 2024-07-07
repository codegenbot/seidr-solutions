Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = true;
    for (int i = 0; i < q.size(); i++) {
        if (str[i] != str[q.size() - i - 1]) {
            balanced = false;
            break;
        }
    }
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}
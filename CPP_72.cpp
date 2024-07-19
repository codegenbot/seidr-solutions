// Task: Write a function that checks if an array of weights can be balanced by planes with limited capacity.

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    bool balanced = str == reverse(str).str;
    return balanced && accumulate(q.begin(), q.end(), 0) <= w;
}
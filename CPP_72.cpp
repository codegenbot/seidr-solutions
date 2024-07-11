Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for (int x : q) {
        s += to_string(x);
    }
    if (s != reverse(s).str()) return false;
    int sum = 0;
    for (int x : q) {
        sum += x;
    }
    return sum <= w;
}
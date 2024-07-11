Here is the completed code:

bool will_it_fly(vector<int> q, int w) {
    vector<int> v(q);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < q.size(); i++) {
        if (v[i] != q[i]) return false;
    }

    int sum = 0;
    for (int x : q) sum += x;

    return sum <= w;
}
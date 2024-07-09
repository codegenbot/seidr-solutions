bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for(int i = 0; i < q.size(); i++) {
        str += to_string(q[i]);
    }
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str != rev) return false;
    int sum = 0;
    for(int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    return sum <= w;
}
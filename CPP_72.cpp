bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    return std::equal(str.begin(), str.end(), str.rbegin()) && q.size() <= w;
}
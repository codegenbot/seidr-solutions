vector<int> issame(vector<int> l) {
    bool same = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] != l[0]) {
            same = false;
            break;
        }
    }
    return vector<int>(size_t(same));
}
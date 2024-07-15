vector<int> sort_third(vector<int>& v) {
    vector<int> l_copy = v;
    for (int i = 0; i < v.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
        }
    }
    return l_copy;
}
vector<int> sort_third(vector<int> l) {
    vector<int> divisible_by_three;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            divisible_by_three.push_back(l[i]);
        }
    }
    sort(divisible_by_three.begin(), divisible_by_three.end());
    int idx = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = divisible_by_three[idx++];
        }
    }
    return l;
}
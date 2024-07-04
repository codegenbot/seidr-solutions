vector<int> sort_third(vector<int> l) {
    vector<int> indices_divisible_by_three;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            indices_divisible_by_three.push_back(l[i]);
        }
    }
    sort(indices_divisible_by_three.begin(), indices_divisible_by_three.end());
    int index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = indices_divisible_by_three[index++];
        }
    }
    return l;
}
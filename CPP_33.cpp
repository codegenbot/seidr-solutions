vector<int> sort_third(vector<int> l) {
    vector<int> temp;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            temp.push_back(l[i]);
        }
    }
    sort(temp.begin(), temp.end());
    int temp_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l[i] = temp[temp_index++];
        }
    }
    return l;
}
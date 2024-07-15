void sort_third(vector<int>& l_copy){
    for (int i = 0; i < l_copy.size(); ++i) {
        if ((i + 1) % 3 == 0) {
            sort(l_copy.begin() + i - 2, l_copy.begin() + i + 1);
        }
    }
}

vector<int> issame(vector<int> l) {
    vector<int> l_copy = l;
    sort_third(l_copy);
    return l_copy;
}
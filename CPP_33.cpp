bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> sort_third(vector<int> l) {
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size(); j += 3) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int j = i, k = 0; j < l.size() && k < temp.size(); j += 3, ++k) {
                l[j] = temp[k];
            }
        }
    }
    return l;
}
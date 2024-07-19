bool issame(vector<int> a, vector<int> b) {
    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());
    return s1 == s2;
}

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            bool flag = true;
            for (int k = 1; k < temp.size(); k++) {
                if (!issame(vector<int>(temp.begin(), temp.begin() + 1), vector<int>(temp.begin() + k, temp.begin() + k + 1))) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int k = 0; k < temp.size(); k++) {
                    result.push_back(temp[k]);
                }
            } else {
                sort(temp.begin(), temp.end());
                for (int k = 0; k < temp.size(); k++) {
                    result.push_back(temp[k]);
                }
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
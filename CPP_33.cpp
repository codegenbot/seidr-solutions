vector<int> sort_third(vector<int> l) {
    vector<int> res;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; ++j)
                temp.push_back(l[j]);
            sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); ++k)
                res.push_back(temp[k]);
        } else
            res.push_back(l[i]);
    }
    return res;
}
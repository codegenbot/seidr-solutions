vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0 && j != i) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result.insert(result.begin() + i, temp[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
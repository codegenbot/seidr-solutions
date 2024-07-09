vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 != 0) {
            result.push_back(l[i]);
        } else {
            vector<int> temp;
            temp.reserve(l.size());
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == i % 3) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        }
    }
    return result;
}
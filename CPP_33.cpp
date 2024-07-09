vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int i = 0;
    while (i < l.size()) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
            i += 3;
        } else {
            result.push_back(l[i]);
            i++;
        }
    }
    return result;
}
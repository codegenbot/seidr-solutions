vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            int k = i;
            for (int num : temp) {
                result.push_back(num);
                k++;
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
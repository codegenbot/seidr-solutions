vector<int> sort_third(vector<int> l) {
    vector<int> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                if (k % 3 == 0) {
                    l_prime.push_back(temp[k]);
                }
            }
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}
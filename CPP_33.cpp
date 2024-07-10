vector<int> sort_third(vector<int> l) {
    vector<int> l_prime;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                l_prime.push_back(temp[0]);
                temp.erase(temp.begin());
            }
        } else {
            l_prime.push_back(l[i]);
        }
    }
    return l_prime;
}
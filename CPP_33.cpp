vector<int> sort_third(vector<int> l){
    vector<int> l_new = l;
    vector<int> sorted_third;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sorted_third.push_back(l[i]);
        }
    }

    sort(sorted_third.begin(), sorted_third.end());

    int count = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_new[i] = sorted_third[count];
            count++;
        }
    }

    return l_new;
}
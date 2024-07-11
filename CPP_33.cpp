vector<int> sort_third(vector<int> l){
    vector<int> sorted_vals;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_vals.push_back(l[i]);
        }
    }

    sort(sorted_vals.begin(), sorted_vals.end());
    
    int sortedIndex = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            continue;
        } else {
            l[i] = sorted_vals[sortedIndex];
            sortedIndex++;
        }
    }
    
    return l;
}
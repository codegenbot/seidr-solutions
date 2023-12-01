vector<int> common(vector<int> l1,vector<int> l2){
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    int i = 0; // index for l1
    int j = 0; // index for l2

    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l2[j] < l1[i]) {
            j++;
        } else {
            result.push_back(l1[i]);
            i++;
            j++;
        }
    }

    return result;
}
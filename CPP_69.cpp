int search(vector<int> lst) {
    int max = 0;
    vector<int> count(lst.size(), 0);
    
    for (auto i : lst) {
        if (i > 0) {
            count[i]++;
            if (count[i] > max)
                max = count[i];
        }
    }
    return max > 1 ? max : -1;
}
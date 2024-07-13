Here is the completed code:

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or you can use nullptr or None as per your language
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size(); i++) {
        if (i > 0 && sorted[i] != sorted[i-1])
            return sorted[i];
    }
    return -1; // or you can use nullptr or None as per your language
}
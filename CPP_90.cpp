int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; // Return None, in C++, we use a special value to indicate absence of data
    vector<int> v(lst);
    sort(v.begin(), v.end());
    int second_smallest = v[0];
    for(int i=1; i<v.size(); i++) {
        if (v[i] > v[0]) {
            return second_smallest;
        }
        second_smallest = v[i];
    }
    return -1; // Return None, in C++, we use a special value to indicate absence of data
}
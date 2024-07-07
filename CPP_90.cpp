Here is the solution:

int next_smallest(vector<int> lst) {
    vector<int> v = lst;
    if(v.size() < 2) return -1; // Return None in Python
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++) {
        if(v[i] != v[i+1]) {
            return v[i+1];
        }
    }
    return -1; // Return None in Python
}
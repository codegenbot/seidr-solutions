Here is the solution:

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_element(l));
    return result;
}

int unique_element(const vector<int>& v) {
    set<int> s(v.begin(), v.end());
    return vector<int>(s.begin(), s.end());
}
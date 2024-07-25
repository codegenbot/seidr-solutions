Here is the completed code:

int max_element(vector<int> v) {
    return *max_element(v.begin(), v.end());
}
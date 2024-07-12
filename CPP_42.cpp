vector<int> incr_vector(vector<int> v) {
    vector<int> result;
    for (int x : v) {
        result.push_back(x + 1);
    }
    return result;
}
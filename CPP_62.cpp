vector<float> derivative(vector<float> xs) {
    vector<float> result;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        result.push_back(i * xs[i]);
    }
    return result;
}
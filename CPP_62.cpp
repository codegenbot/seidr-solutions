vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 0; i < result.size(); i++) {
        result[i] = (xs[i + 1] - xs[i]) / ((i + 2) - (i + 1));
    }
    return result;
}
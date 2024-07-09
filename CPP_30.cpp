vector<float> get_positive(vector<float> l) {
    vector<float> positive;
    for (float x : l) {
        if (x > 0)
            positive.push_back(x);
    }
    return positive;
}
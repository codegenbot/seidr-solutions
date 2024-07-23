float max_element(vector<float> l){
    float max = l[0];
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}
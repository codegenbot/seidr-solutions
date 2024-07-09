float max_element(vector<float> l){
    float max = l[0];
    for (auto it = l.begin(); it != l.end(); ++it) {
        if (*it > max) {
            max = *it;
        }
    }
    return max;
}
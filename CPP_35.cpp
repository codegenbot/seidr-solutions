float max_element(vector<float> l){
    if (l.empty()) return NAN;
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}
float max_element(vector<float> l){
    float max_value = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        max_value = max(max_value, l[i]);
    }
    return max_value;
}
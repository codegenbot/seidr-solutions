float max_element(vector<float> l) {
    if (l.empty()) return -INFINITY; // Handle empty vector case
    float max_val = l[0];
    for (float el : l) {
        if (el > max_val) {
            max_val = el;
        }
    }
    return max_val;
}
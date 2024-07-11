float max_element(vector<float> l){
    float max_val = l[0];
    for (float elem : l) {
        if (elem > max_val) {
            max_val = elem;
        }
    }
    return max_val;
}
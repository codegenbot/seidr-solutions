float max_element(vector<float> l){
    float maximum = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > maximum) {
            maximum = l[i];
        }
    }
    return maximum;
}
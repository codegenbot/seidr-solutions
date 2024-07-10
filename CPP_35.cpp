float max_element(vector<float> l){
    float max = l[0];
    for (float elem : l) {
        if (elem > max) {
            max = elem;
        }
    }
    return max;
}
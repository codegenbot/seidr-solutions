float max_element(vector<float> l){
    float max = l[0];
    for (float num : l) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}
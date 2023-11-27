float max_element(vector<float> l) {
    float maxNum = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > maxNum) {
            maxNum = l[i];
        }
    }
    return maxNum;
}
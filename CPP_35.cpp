float max_element(vector<float> l){
    float max = l[0];
    for(float i : l) {
        if(i > max)
            max = i;
    }
    return max;
}
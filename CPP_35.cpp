float max_element(vector<float> l){
    float max = l[0];
    for(float x: l) {
        if(x > max)
            max = x;
    }
    return max;
}
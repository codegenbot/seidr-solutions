float max_element(vector<float> l){
    float result = l[0];
    for (auto i : l) {
        if(i > result)
            result = i;
    }
    return result;
}
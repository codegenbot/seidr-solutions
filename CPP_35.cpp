float max_element(vector<float> l){
    float maxi = l[0];
    for(float i:l) {
        if(i > maxi)
            maxi = i;
    }
    return maxi;
}
float max_element(vector<float> l){
    float maxi = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > maxi)
            maxi = l[i];
    }
    return maxi;
}
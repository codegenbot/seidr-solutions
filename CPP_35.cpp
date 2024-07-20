float max_element(vector<float> l){
    float result = l[0];
    for(int i=1;i<l.size();i++){
        if(l[i] > result)
            result = l[i];
    }
    return result;
}
Here is the completed code:

float max_element(vector<float> l){
    float m = l[0];
    for(int i=1;i<l.size();i++){
        if(l[i]>m)
            m=l[i];
    }
    return m;
}
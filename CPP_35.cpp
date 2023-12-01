float max_element(vector<float> l){
    float maxElement = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > maxElement){
            maxElement = l[i];
        }
    }
    return maxElement;
}
vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){ // even index
            vector<float> temp;
            for(auto x : l) {
                if(x <= l[i]) {
                    temp.push_back(x);
                }
            }
            result[i] = *max_element(temp.begin(), temp.end());
        } else { // odd index
            result[i] = l[i];
        }
    }
    return result;
}
bool issame(vector<float> a, vector<float> b);

vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){ // even index
            vector<float> evens(l.size()); // fix error: add size()
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0){
                    evens.push_back(l[j]);
                }
            }
            sort(evens.begin(), evens.end());
            result[i] = evens[0];
        } else {
            result[i] = l[i]; // odd index, keep the same
        }
    }
    return result;
}
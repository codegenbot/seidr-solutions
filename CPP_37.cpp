vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> evenIndices;
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0){
                    evenIndices.push_back(l[j]);
                }
            }
            sort(evenIndices.begin(), evenIndices.end());
            result[i] = evenIndices[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}
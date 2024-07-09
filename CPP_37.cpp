bool issame(float a, float b) {
    if(abs(a-b)<0.0001)
        return true;
    else
        return false;
}

vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> temp;
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0)temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        }else{
            for(auto &x : l) {
                bool found = false;
                for(int k = 0; k < i; k++) {
                    if(issame(x, result[k])) {
                        found = true;
                        break;
                    }
                }
                if(!found)
                    result[i] = x;
            }
        }
    }
    return result;
}
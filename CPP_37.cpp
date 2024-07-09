bool issame(float a, float b) {
    if (abs(a - b) < 0.0001)
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
            bool found = false;
            float val = l[i];
            for(int k = i; k < l.size(); k++){
                if(issame(val, l[k])){
                    result[i] = l[k];
                    found = true;
                    break;
                }
            }
            if(!found)result[i] = val;
        }
    }
    return result;
}
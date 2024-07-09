bool issame(float a, float b){
    if(a - b < 0.0001 && a - b > -0.0001) return true;
    else return false;
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
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0 && issame(val, l[j])){
                    found = true;
                    break;
                }
            }
            if(found) result[i] = temp[0];
            else result[i] = val;
        }
    }
    return result;
}
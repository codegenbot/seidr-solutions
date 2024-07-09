bool issame(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0) {
        return true;
    }
    else if (a % 2 != 0 && b % 2 == 0) {
        return false;
    }
    else {
        return a <= b;
    }
}

vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(issame(i, 0)){
            vector<float> temp;
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0)temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        }else{
            result[i] = l[i];
        }
    }
    return result;
}
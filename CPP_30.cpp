```
bool issame(float a, float b){
    if(a == b)
        return true;
    else
        return false;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (!issame(num, 0)) {
            result.push_back(num);
        }
    }
    return result;
}
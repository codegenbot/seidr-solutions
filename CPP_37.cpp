bool issame(vector<float> a,vector<float>b){
    return a == b;
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
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    assert(isSame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}
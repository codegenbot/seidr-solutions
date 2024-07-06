vector<float> sort_even(vector<float> l){
    vector<float> res;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> temp;
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0)
                    temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            res.insert(res.begin() + i, temp[0]);
        } else {
            res.push_back(l[i]);
        }
    }
    return res;
}
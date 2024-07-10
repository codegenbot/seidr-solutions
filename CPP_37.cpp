vector<float> sort_even(vector<float> l){
    vector<float> l_new;
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> temp;
            for(int j = 0; j < l.size(); j++){
                if(j % 2 == 0){
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            l_new.insert(l_new.end(), temp.begin(), temp.end());
        } else {
            l_new.push_back(l[i]);
        }
    }
    return l_new;
}
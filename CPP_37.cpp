vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> temp;
            for(auto j: l | std::views::slices(0, l.size(), 2)){
                temp.push_back(j);
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
            for(int k = 1; k < temp.size(); k++){
                if(i + k * 2 < l.size()){
                    result[i+k*2] = temp[k];
                }
            }
        }else{
            result[i] = l[i];
        }
    }
    return result;
}
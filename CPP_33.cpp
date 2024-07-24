sort_third(vector<int> l){
    vector<int> res = l;
    for(int i = 0; i < res.size(); i++){
        if(i % 3 == 0){
            vector<int> temp;
            for(int j = i; j < min(i + 3, (int)res.size()); j++){
                temp.push_back(res[j]);
            }
            sort(temp.begin(), temp.end());
            for(int j = i; j < min(i + 3, (int)res.size()); j++){
                res[j] = temp[j - i];
            }
        }
    }
    return res;
}
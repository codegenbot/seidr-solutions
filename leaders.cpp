```
vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int max_right = v.back();
    for(int i=v.size()-1; i>=0; --i){
        if(v[i]>=max_right){
            max_right = v[i];
            res.push_back(max_right);
        }
    }
    return res;
}
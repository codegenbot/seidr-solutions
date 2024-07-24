vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(int i = 0; i < a.size(); i++){
        bool same = true;
        for(int j = 0; j < a[i].size(); j++){
            if(a[i][j] != b[i][j]){
                same = false;
                break;
            }
        }
        result.push_back(same);
    }
    return result;
}
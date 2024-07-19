bool issame(const vector<string>& vec1, const vector<string>& vec2);

vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(const vector<string>& vec1, const vector<string>& vec2){
    if(vec1.size() != vec2.size()){
        return false;
    }
    for(size_t i = 0; i < vec1.size(); ++i){
        if(vec1[i] != vec2[i]){
            return false;
        }
    }
    return true;
}
bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values);

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(auto ptr = boost::any_cast<int>(&val)){
            result.push_back(*ptr);
        }
    }
    return result;
}
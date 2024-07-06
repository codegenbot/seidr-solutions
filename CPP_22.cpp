bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            int num = boost::any_cast<int>(value).get();
            if (num >= 0) { 
                result.push_back(num);
            }
        }
    }
    return result;
}
bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).which() == boost::any::type_id<int>()) {
            try {
                int num = boost::any_cast<int>(value).get();
                result.push_back(num);
            } catch(const exception &e) {
                
            }
        }
    }
    return result;
}
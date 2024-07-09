bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector_any filter_integers(list_any values){
    vector_any result;
    for (const auto& value : values) {
        if(boost::any_cast<tuple<bool,int>,value>().second==0){ 
            if(boost::get<bool>(boost::any_cast<tuple<bool,int>,value>()) && boost::get<int>(boost::any_cast<tuple<bool,int>,value>())!=0) {
                result.push_back(boost::get<int>(boost::any_cast<tuple<bool,int>,value>()));
            }
        } 
    }
    return result;
}
bool issame(const boost::any& value, const std::type_info& type){
    return value.type() == type;
}

vector<int> filter_integers(const std::list<boost::any>& values);

int main(){
    std::list<boost::any> values = {10, "hello", 20, 30, "world"};
    vector<int> result = filter_integers(values);
    for(const auto& num : result){
        cout << num << " ";
    }
    return 0;
}

vector<int> filter_integers(const std::list<boost::any>& values){
    vector<int> result;
    for(const auto& val : values){
        if(issame(val, typeid(int))){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}
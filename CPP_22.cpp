```
vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;

}

bool issame(vector<int> a, vector<int> b) { 
    return a == b; 
} 

assert(std::vector<int>(filter_integers({3, 'c', 3, 3, 'a', 'b'})) == {3, 3, 3});
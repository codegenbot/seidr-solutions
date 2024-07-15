namespace std {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
        return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
    }
    
    std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
        std::vector<std::string> filteredVec;
        for(const std::string& str : vec){
            if(str.substr(0, prefix.size()) == prefix){
                filteredVec.push_back(str);
            }
        }
        return filteredVec;
    }
}
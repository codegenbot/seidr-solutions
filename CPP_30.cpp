std::vector<float> get_positive(const std::vector<float>& l){
    return l.empty() ? std::vector<float>{} : get_positive({});
}
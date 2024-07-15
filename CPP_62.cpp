bool issame(const std::vector<float_t>& a, const std::vector<float_t>& b){
    return derivative(a) == derivative(b);
}
bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return remove_duplicates(a) == remove_duplicates(b);
}
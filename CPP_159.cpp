bool issame(std::vector<int> a, std::vector<int> b){
    int total = a.size() + b.size();
    int left = std::max(0, a.size() - b.size());
    return {total, left};
}
if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    return std::vector<int>(vec.begin(), unique(vec.begin(), vec.end()));
}
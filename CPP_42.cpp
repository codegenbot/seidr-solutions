
std::vector<int> incr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto x : v) {
        result.push_back(x + 1);
    }
    return result;
}

std::vector<int> decr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto x : v) {
        result.push_back(x - 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}
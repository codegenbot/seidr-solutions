```cpp
bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] + v2[i] != sortListSum({{v1[i], v2[i]}})[0]) return false;
    }
    return true;
}

std::vector<std::string> sortListSum(std::vector<std::string> v) {
    std::sort(v.begin(), v.end());
    return v;
}
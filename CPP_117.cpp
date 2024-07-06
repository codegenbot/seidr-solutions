```cpp
bool areWordsTheSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!is_same(a[i][0], b[i][0])) {
            return false;
        }
    }
    return true;
}
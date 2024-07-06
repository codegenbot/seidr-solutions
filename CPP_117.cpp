std::vector<std::string> b;
bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i][0].compare(0,1,b[i][0],0,1)) {
            return false;
        }
    }
    return true;
}
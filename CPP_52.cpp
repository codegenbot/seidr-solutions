bool below_threshold(std::vector<int> l, int t) {
    if (l.empty()) {
        return true; 
    }
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}
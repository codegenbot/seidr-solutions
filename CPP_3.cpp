bool below_zero(const std::vector<int>& arr) {
    for (int num : arr) {
        if (num < 0) {
            return true;
        }
    }
    return false;
}
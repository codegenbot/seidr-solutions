double median(const std::vector<int>& l) {
    std::vector<int> sorted_list = l;
    std::sort(sorted_list.begin(), sorted_list.end());
    int n = sorted_list.size();
    if (n % 2 == 0) {
        return (sorted_list[n/2 - 1] + sorted_list[n/2]) / 2.0;
    } else {
        return sorted_list[n/2];
    }
}
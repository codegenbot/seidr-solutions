std::vector<int> findCommonElements(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}
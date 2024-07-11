bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<int>> largest_smallest_integers(std::vector<int> lst) {
    int max_negative = 0;
    int min_positive = INT_MAX;

    for(int i : lst) {
        if(i < 0 && i > max_negative) {
            max_negative = i;
        } else if(i > 0 && i < min_positive) {
            min_positive = i;
        }
    }

    return {{std::max(0, max_negative), std::min(min_positive, 1)}};
}

assert(MyNamespace::largest_smallest_integers({-3, -2, -1, 0, 1}) == {{0, 1}});
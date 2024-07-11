auto max_pair = *std::max_element(std::begin(p), std::end(p), [](const pair<int,int>& a, const pair<int,int>& b) {
    return a.first < b.first;
});
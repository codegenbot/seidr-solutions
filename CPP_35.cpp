auto max_pair = *std::max_element(std::begin(p), std::end(p), [](const auto& a, const auto& b) {
    return a.second < b.second;
});
bool issame(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (std::accumulate(lst1.begin(), lst1.end(), 0,
                         [](int sum, const auto& s) { return sum + s.length(); })
        < std::accumulate(lst2.begin(), lst2.end(), 0,
                           [](int sum, const auto& s) { return sum + s.length(); })) {
        return true;
    } else if (std::accumulate(lst1.begin(), lst1.end(), 0,
                                 [](int sum, const auto& s) { return sum + s.length(); })
               > std::accumulate(lst2.begin(), lst2.end(), 0,
                                  [](int sum, const auto& s) { return sum + s.length(); })) {
        return false;
    } else {
        return true; // or false, depending on your requirement
    }
}
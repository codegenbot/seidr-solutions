const std::vector<std::string>& sorted_list_sum(const std::vector<std::string>& lst) {
    auto it = std::stable_partition(lst.begin(), lst.end(),
                                     [&](const auto& s) { return s.length() % 2 == 0; }),
        end = lst.erase(it, lst.end());
    std::stable_sort(std::next(lst.begin()), lst.end(),
                      [](const auto& a, const auto& b) {
                          if (a.length() != b.length())
                              return a.length() < b.length();
                          else
                              return a < b;
                      });
    return lst;
}
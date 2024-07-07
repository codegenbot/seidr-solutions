vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (it->length() % 2 == 1) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }

    std::sort(lst.begin(), lst.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return lst;
}
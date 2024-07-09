vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (stoi(it->back()) % 2 != 0) {
            it = lst.erase(it);
            if (it == lst.end())
                break;
        } else
            ++it;
    }
    std::sort(lst.begin(), lst.end(),
          [](const string& a, const string& b) {
              if (stoi(a.back()) == stoi(b.back()))
                  return a < b;
              return stoi(a.back()) < stoi(b.back());
          });
    return lst;
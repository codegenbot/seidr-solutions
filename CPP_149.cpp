Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (it->length() % 2 != 0) {
            it = lst.erase(it);
            if (it == lst.end())
                break;
        } else
            ++it;
    }
    std::sort(lst.begin(), lst.end(),
          [](const string& a, const string& b) {
              if (a.length() == b.length())
                  return a < b;
              return a.length() < b.length();
          });
    return lst;
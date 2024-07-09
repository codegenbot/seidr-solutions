vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (stoi(*it) % 2 != 0) {
            it = lst.erase(it);
            if (it == lst.end())
                break;
        } else
            ++it;
    }
    std::sort(lst.begin(), lst.end(),
          [](const string& a, const string& b) {
              return to_string(stoi(a)) + to_string(stoi(b)) > to_string(stoi(b)) + to_string(stoi(a));
          });
    return lst;
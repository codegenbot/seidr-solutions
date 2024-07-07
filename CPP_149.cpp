vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    for (auto it = lst.begin(); it != lst.end();) {
        if (it->length() % 2 != 0) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }

    // Sort the vector by length and then alphabetically
    std::sort(lst.begin(), lst.end(),
              [](const string& a, const string& b) {
                  if (a.length() == b.length()) {
                      return a < b;
                  } else {
                      return a.length() < b.length();
                  }
              });

    return lst;
}
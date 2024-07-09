Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->size() % 2 != 0) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.size() == b.size()) {
                      return a < b;
                  } else {
                      return a.size() < b.size();
                  }
              });
    return result;
}
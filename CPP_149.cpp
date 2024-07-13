Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.size() != b.size()) {
                      return a.size() < b.size();
                  } else {
                      return a < b;
                  }
              });
    return result;
}
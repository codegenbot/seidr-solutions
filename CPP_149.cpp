vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Remove strings with odd lengths from the list and sort it by length
    for (string s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
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
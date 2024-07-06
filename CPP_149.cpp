```
bool issame(const string& str1, const string& str2) {
    return (str1.length() == str2.length());
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (issame(str, "")) {
            result.push_back(str);
        }
    }
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });
    return result;
}
Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // First, filter out strings with odd lengths
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Then, sort the remaining strings by length and then alphabetically
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
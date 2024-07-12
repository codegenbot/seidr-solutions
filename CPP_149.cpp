bool issame(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    } else {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Delete strings that have odd lengths from the list
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    // Sort the resulted vector by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      for (int i = 0; i < a.length(); i++) {
                          if (a[i] < b[i]) {
                              return true;
                          }
                          else if (a[i] > b[i]) {
                              return false;
                          }
                      }
                      return a < b;
                  }
              });

    return result;
}
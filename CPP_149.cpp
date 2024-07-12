bool issame(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

void test() {
    vector<string> lst = {"abc", "abcd", "def", "ghij"};
    vector<string> result = sorted_list_sum(lst);
    assert(result.size() == 3); // Check if the number of strings in the output is correct
    for (int i = 0; i < result.size(); i++) {
        for (int j = i + 1; j < result.size(); j++) {
            assert(issame(result[i], result[j]) || (result[i].length() < result[j].length()));
        }
    }
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
                      return a < b;
                  }
              });

    return result;
}
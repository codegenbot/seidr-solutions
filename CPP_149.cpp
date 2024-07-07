std::vector<string> sorted_list_sum(vector<string> lst) {
    vector<int> sum;
    for (const auto& str : lst) {
        int total = 0;
        for (char c : str) {
            if (islower(c)) {
                total += tolower(c) - 'a' + 1;
            } else if (isupper(c)) {
                total += toupper(c) - 'A' + 27;
            }
        }
        sum.push_back(total);
    }

    vector<string> sorted_lst = lst;

    std::sort(sorted_lst.begin(), sorted_lst.end(),
              [](const string& a, const string& b) {
                  if (stoi(a.substr(1)) != stoi(b.substr(1))) {
                      return stoi(a.substr(1)) < stoi(b.substr(1));
                  } else {
                      return a < b;
                  }
              });

    return sorted_lst;
}
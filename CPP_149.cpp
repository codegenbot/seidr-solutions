vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths
    vector<string> filteredList;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            filteredList.push_back(str);
        }
    }

    // Sort the filtered list based on length and then alphabetically
    std::sort(filteredList.begin(), filteredList.end(), 
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return filteredList;
}
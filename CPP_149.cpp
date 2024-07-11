vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    // Remove strings with odd lengths and sort the remaining vectors by length and then alphabetically.
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) { // check if string has even length
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(), 
              [](const auto &a, const auto &b) {
                  if (a.length() == b.length()) return a < b;
                  else return a.length() < b.length();
              });

    return result;
}
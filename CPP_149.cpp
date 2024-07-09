vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths and sort the remaining strings by length then alphabetically.
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) { // Check if the string has even length
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(), 
              [](const auto& a, const auto& b) {
                  if (a.length() != b.length()) return a.length() < b.length();
                  else return a < b;
              });

    return result;
}
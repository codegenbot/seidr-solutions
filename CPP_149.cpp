```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths and sort the remaining strings
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    // Sort the resulting vector based on length and then alphabetically
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
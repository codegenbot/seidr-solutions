#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return false;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    // Create a new vector and copy strings with even lengths to it
    std::vector<std::string> result;
    for (const std::string& s : lst) {
        if (s.length() % 2 == 0) {
            result.push_back(s);
        }
    }

    // Sort the resulting vector by length and then alphabetically
    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return issame(a, b);
                  }
              });

    return result;
}
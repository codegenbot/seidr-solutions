#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths
    vector<string> evenLengthStrings;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            evenLengthStrings.push_back(str);
        }
    }

    // Sort the remaining strings by length and then alphabetically
    sort(evenLengthStrings.begin(), evenLengthStrings.end(),
          [](const string& a, const string& b) {
              if (a.length() != b.length()) {
                  return a.length() < b.length();
              } else {
                  return a < b;
              }
          });

    return evenLengthStrings;
}
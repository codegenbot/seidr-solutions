#include <vector>
#include <algorithm>
#include <string>

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    // Filter out strings with odd lengths
    std::vector<std::string> evenLengthStrings;
    for (const std::string& str : lst) {
        if (str.length() % 2 == 0) {
            evenLengthStrings.push_back(str);
        }
    }

    // Sort the remaining strings by length and then alphabetically
    std::sort(evenLengthStrings.begin(), evenLengthStrings.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return evenLengthStrings;
}

int main() {
    vector<string> input = {"aaaa", "bbbb", "dd", "cc"};
    vector<string> expected = {"cc", "dd", "aaaa", "bbbb"};
    assert(sorted_list_sum(input) == expected);
    return 0;
}
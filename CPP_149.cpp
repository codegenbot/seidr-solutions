#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    } else {
        return a <= b;
    }
}

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
                      return issame(a, b);
                  }
              });

    return evenLengthStrings;
}

int main() {
    std::vector<std::string> input = {"aaaa", "bbbb", "dd", "cc"};
    std::cout << "Sorted list: ";
    for (const auto& str : sorted_list_sum(input)) {
        std::cout << str << " ";
    }
    return 0;
}
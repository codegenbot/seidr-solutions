#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<string> result;

    for (const string &str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [](const string& a, const string& b) {
                  if (a.length() == b.length()) {
                      return a < b;
                  } else {
                      return a.length() < b.length();
                  }
              });

    return result;
}

int main() {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::string> result = sorted_list_sum(lst);

    assert(issame(result, {"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}
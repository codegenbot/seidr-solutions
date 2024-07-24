#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> lst = {"aaaa", "bbbb", "dd", "cc"};
    std::vector<std::string> result = this->sorted_list_sum(lst);
    
    assert(issame(result, {"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}

std::vector<string> main::sorted_list_sum(std::vector<string> lst) {
    std::vector<string> result;

    for (const auto& str : lst) {
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
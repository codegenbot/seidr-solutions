#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    std::sort(result.begin(), result.end(),
              [](const std::string& a, const std::string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return result;
}

int main() {
    int n;
    std::vector<std::string> lst;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        lst.push_back(s);
    }
    
    auto result = sorted_list_sum(lst);
    
    std::cout << "Sorted list of strings: ";
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
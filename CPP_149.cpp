#include <vector>
#include <algorithm>

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
    std::cout << "Enter number of strings: ";
    std::cin >> n;

    std::vector<std::string> list;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, str);
        list.push_back(str);
    }

    std::vector<std::string> sorted = sorted_list_sum(list);

    if (sorted.empty()) {
        std::cout << "The sum is 0." << std::endl;
    } else {
        std::cout << "Sorted strings: ";
        for (const auto& str : sorted) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
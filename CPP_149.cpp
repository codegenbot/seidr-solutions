```
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    for (char c : a) {
        if (!std::count(b.begin(), b.end(), c)) return false;
    }
    for (char c : b) {
        if (!std::count(a.begin(), a.end(), c)) return false;
    }
    return true;
}

bool is_sorted(const std::vector<std::string>& v) {
    for (int i = 1; i < v.size(); ++i) {
        if (!issame(v[i-1], v[i])) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}

int main() {
    std::vector<std::string> lst = {"hello", "world", "abc", "abcd"};
    if (is_sorted(sorted_list_sum(lst))) {
        for (const auto& str : sorted_list_sum(lst)) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not sorted!" << std::endl;
    }
    return 0;
}
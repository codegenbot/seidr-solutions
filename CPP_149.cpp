#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             }
             return a < b;
         });
    return result;
}

int main() {
    std::vector<std::string> lst;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        lst.push_back(str);
    }
    
    std::vector<std::string> result = sorted_list_sum(lst);

    if (result.size() > 0) {
        for (auto it = result.begin(); it != result.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "No strings with odd length found.\n";
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using string = std::basic_string<char>;

bool issame(std::vector<string> a, std::vector<string> b) {
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

int sorted_list_sum(const std::vector<string>& lst) {
    std::vector<string> sorted_lst(lst);
    
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    int sum = 0;
    for (const string& s : sorted_lst) {
        sum += std::stoi(s);
    }

    return sum;
}

int main() {
    std::vector<string> test_lst = { "10", "3", "27" };
    assert(sorted_list_sum(test_lst) == 130);

    return 0;
}
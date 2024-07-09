#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_lst = lst;
    sorted_lst.erase(std::remove_if(sorted_lst.begin(), sorted_lst.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_lst.end());
    std::sort(sorted_lst.begin(), sorted_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_lst;
}

int main() {
    vector<string> input_lst = {"apple", "banana", "pear", "kiwi", "orange"};
    vector<string> sorted_result = sorted_list_sum(input_lst);

    for (const string& s : sorted_result) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
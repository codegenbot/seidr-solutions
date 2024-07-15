#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int countTotalChars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2);

int main() {
    std::vector<std::string> lst1 = {"abc", "def", "ghi"};
    std::vector<std::string> lst2 = {"1234", "56789"};

    std::vector<std::string> result = total_match(lst1, lst2);

    for (const std::string& str : result) {
        std::cout << str << std::endl;
    }

    return 0;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars_lst1 = countTotalChars(lst1);
    int total_chars_lst2 = countTotalChars(lst2);

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}
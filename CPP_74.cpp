#include <vector>
#include <string>

bool issame(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    return lst1 == lst2;
}

int totalChars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars_lst1 = totalChars(lst1);
    int total_chars_lst2 = totalChars(lst2);

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}
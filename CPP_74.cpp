#include <iostream>
#include <vector>
#include <cassert>

int countTotalChars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

bool issame(const std::string a, const std::string b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int total_chars_lst1 = countTotalChars(lst1);
    int total_chars_lst2 = countTotalChars(lst2);
    
    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    // Test your functions here
    return 0;
}
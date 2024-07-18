#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int total_match(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    int count = 0;
    for (const std::string& str1 : a) {
        for (const std::string& str2 : b) {
            if (str1 == str2) {
                count++;
            }
        }
    }
    return count;
}

std::vector<std::string> compare_lists(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;

    for (const std::string& str : lst1) {
        total_chars1 += str.size();
    }

    for (const std::string& str : lst2) {
        total_chars2 += str.size();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame({"this"}, { "is", "an", "example" }));
    
    return 0;
}
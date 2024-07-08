#include <string>
#include <vector>

bool issame(const vector<std::string>& lst1, const vector<std::string>& lst2) {
    int total_chars1 = 0, total_chars2 = 0;
    for (const std::string& s : lst1) {
        total_chars1 += s.size();
    }
    for (const std::string& s : lst2) {
        total_chars2 += s.size();
    }

    return total_chars1 == total_chars2;
}
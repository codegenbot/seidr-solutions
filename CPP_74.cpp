#include <vector>
#include <string>
#include <cassert>

int total_chars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

bool total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    return total_chars(lst1) < total_chars(lst2) ? true : (total_chars(lst1) == total_chars(lst2) ? true : false);
}

int main() {
    // Test your code here using assert statements
    std::vector<std::string> lst1 = {"apple", "banana"};
    std::vector<std::string> lst2 = {"kiwi", "orange"};

    assert(!total_match(lst1, lst2));

    return 0;
}
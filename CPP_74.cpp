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
    if (total_chars(lst1) < total_chars(lst2)) {
        return true;
    } else {
        return total_chars(lst1) == total_chars(lst2) ? true : false;
    }
}

int main() {
    // Main function for testing the code
    std::vector<std::string> test1 = {"apple", "banana", "orange"};
    std::vector<std::string> test2 = {"car", "bus"};

    assert(total_match(test1, test2) == true);

    return 0;
}
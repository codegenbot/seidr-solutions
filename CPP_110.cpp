#include <string>
#include <vector>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int num : lst1) {
        bool found = false;
        for (int other_num : lst2) {
            if (other_num == num) {
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}
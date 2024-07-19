#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    bool has_odd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            has_odd = true;
            break;
        }
    }
    if (!has_odd) return "YES";
    for (int num : lst2) {
        if (num % 2 == 0) {
            int found = false;
            for (int x : lst1) {
                if (x == num) {
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}
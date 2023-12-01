#include <vector>
#include <algorithm>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    // Check if all elements in lst1 are already even
    bool allEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if (allEven) {
        return "YES";
    }

    // Check if there are odd elements in lst2 that can be swapped with lst1
    for (int num : lst2) {
        if (num % 2 == 0) {
            return "YES";
        }
    }

    return "NO";
}
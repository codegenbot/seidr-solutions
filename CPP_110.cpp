#include <vector>
#include <algorithm>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int otherNum : lst2) {
                if (otherNum % 2 == 0) {
                    std::swap(lst1[std::find(lst1.begin(), lst1.end(), num) - lst1.begin()], lst2[std::find(lst2.begin(), lst2.end(), otherNum) - lst2.begin()]);
                    found = true;
                    break;
                }
            }
            if (!found)
                return "NO";
        }
    }
    return evenCount == 0 ? "NO" : "YES";
}
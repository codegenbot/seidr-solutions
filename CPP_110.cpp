#include <vector>
#include <algorithm>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) {
        return "YES";
    } else {
        bool possible = false;
        for (int num : lst2) {
            if (std::find(lst1.begin(), lst1.end(), num) != lst1.end() && num % 2 != 0) {
                possible = true;
                break;
            }
        }
        return possible ? "YES" : "NO";
    }
}
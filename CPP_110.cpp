#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst1) {
        if (num % 2 != 0 && evenCount > 0)
            return std::string("YES");
        else if (num % 2 != 0)
            return std::string("NO");
    }
    return evenCount == lst1.size() ? std::string("YES") : std::string("NO");
}
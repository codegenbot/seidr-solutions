#include <string>
#include <vector>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    for (int num : lst2) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    return evenCount == lst1.size() ? "YES" : "NO";
}
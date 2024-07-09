#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    bool foundOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            foundOdd = true;
            break;
        }
    }
    if (!foundOdd) return "YES";
    int oddCountInLst1 = 0;
    for (int num : lst1) {
        if (num % 2 != 0) oddCountInLst1++;
    }
    int oddCountInLst2 = 0;
    for (int num : lst2) {
        if (num % 2 != 0) oddCountInLst2++;
    }
    return (oddCountInLst1 > 0 && oddCountInLst2 == 0) ? "NO" : "YES";
}
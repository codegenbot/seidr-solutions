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
    for (int num : lst2) {
        if (num % 2 == 0) {
            int foundOddInLst1 = 0;
            bool oddFound = false;
            for (int num2 : lst1) {
                if (num2 % 2 != 0) {
                    foundOddInLst1++;
                    oddFound = true;
                    break;
                }
            }
            if (!oddFound) return "NO";
        }
    }
    return "YES";
}
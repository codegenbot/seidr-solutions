#include <iostream>
#include <vector>
#include <string>

bool hasOdd(int x) {
    return x % 2 != 0;
}

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    int oddCount = 0;
    for (int x : lst1) {
        if (hasOdd(x)) {
            oddCount++;
        }
    }

    if (oddCount > (lst2.size() - oddCount)) {
        return "NO";
    } else {
        return "YES";
    }
}
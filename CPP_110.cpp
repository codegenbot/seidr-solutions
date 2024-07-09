#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0 && num2 != num) {
                    std::swap(lst1[std::stable_partition(lst1.begin(), lst1.end(), [&](int n){ return n < num; })->end - 1], num2);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}
#include <iostream>
#include <vector>
#include <algorithm>
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
    for (auto it = lst1.begin(); it != lst1.end(); ++it) {
        for (auto j = lst2.begin(); j != lst2.end(); ++j) {
            if (*it % 2 != 0 && *j % 2 == 0) {
                std::swap(*it, *j);
                foundOdd = false;
                break;
            }
        }
    }
    return foundOdd ? "NO" : "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}
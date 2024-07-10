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
    for (int i = 0; i < lst1.size(); i++) {
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] % 2 != 0 && lst2[j] % 2 == 0) {
                swap(lst1[i], lst2[j]);
                foundOdd = false;
                break;
            }
        }
    }
    return foundOdd ? "NO" : "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    std::vector<int> list1 = {2, 4, 6};
    std::vector<int> list2 = {3, 5, 7};
    if (exchange(list1, list2) == "NO") {
        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {
                if (list1[i] % 2 != 0 && list2[j] % 2 == 0) {
                    std::swap(list1[i], list2[j]);
                }
            }
        }
    }
    return 0;
}
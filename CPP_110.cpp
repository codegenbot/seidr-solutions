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
    int oddIndex = -1;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            oddIndex = i;
            break;
        }
    }
    if (oddIndex == -1) return "NO";
    for (int j = 0; j < lst2.size(); j++) {
        if (lst2[j] % 2 == 0) {
            swap(lst1[oddIndex], lst2[j]);
            foundOdd = false;
            break;
        }
    }
    if (!foundOdd) return "YES";
    return "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}
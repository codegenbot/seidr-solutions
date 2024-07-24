```
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

std::vector<std::string> match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int sum1 = 0;
    for (const std::string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const std::string& s : lst2) {
        sum2 += s.length();
    }

    if (!lst1.size() && !lst2.size()) return {};

    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        if (same(lst1, lst2)) return lst1;
        else return lst2;
    }
}

int main() {
    int n1, n2;
    std::cout << "Enter the number of strings for list 1: ";
    std::cin >> n1;
    std::vector<std::string> lst1;
    std::cout << "Enter string " << n1 << " for list 1:\n";
    for (int i = 0; i < n1; i++) {
        std::string s;
        while (true) {
            std::cin >> s;
            if (s.size() > 0) break;
            std::cout << "Invalid input. Please enter a non-empty string.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please try again: ";
            std::getline(std::cin, s);
        }
        lst1.push_back(s);
    }

    std::cout << "Enter the number of strings for list 2: ";
    std::cin >> n2;
    std::vector<std::string> lst2;
    std::cout << "Enter string " << n2 << " for list 2:\n";
    for (int i = 0; i < n2; i++) {
        std::string s;
        while (true) {
            std::cin >> s;
            if (s.size() > 0) break;
            std::cout << "Invalid input. Please enter a non-empty string.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please try again: ";
            std::getline(std::cin, s);
        }
        lst2.push_back(s);
    }

    if (same(lst1, lst2)) {
        std::cout << "The lists are the same.\n";
    } else {
        std::vector<std::string> result = match(lst1, lst2);
        if (std::equal(result.begin(), result.end(), lst1.begin())) {
            std::cout << "List 1 is the match of list 2.\n";
        } else {
            std::cout << "List 2 is the match of list 1.\n";
        }
    }

    return 0;
}
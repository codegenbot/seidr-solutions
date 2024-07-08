#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int i : lst) {
        freq[i]++;
    }
    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first) {
            return p->first;
        }
    }
    return -1;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    int result = search(lst);
    if (result != -1)
        std::cout << "First number that appears the same or more times as its value is: " << result;
    else
        std::cout << "No such number found";
    return 0;
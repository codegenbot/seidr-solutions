```
#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }
    return -1;
}

int main() {
    std::vector<int> lst;
    int n, numInputs = 5; // Limit the number of inputs
    while(numInputs-- > 0) {
        std::cin >> n;
        lst.push_back(n);
    }
    int result = search(lst);
    if (result != -1) {
        std::cout << "The first number that appears at least as many times as its value is: " << result << std::endl;
    } else {
        std::cout << "No such number found." << std::endl;
    }
    return 0;
}
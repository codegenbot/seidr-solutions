#include <cassert>
#include <vector>
#include <map>
#include <iostream>

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
    assert(search({3, 10, 10, 9, 2}) == -1);
    std::vector<int> lst = {3, 10, 10, 9, 2};
    int result = search(lst);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}
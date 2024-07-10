#include <map>
#include <vector>

int search(std::vector<int> lst) {
    std::map<int, int> my_freq;
    for (int num : lst) {
        if (my_freq.find(num) == my_freq.end()) {
            my_freq[num] = 1;
        } else {
            my_freq[num]++;
        }
    }
    for (auto it = my_freq.begin(); it != my_freq.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }
    return -1;
}
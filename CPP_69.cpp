```cpp
#include <vector>
#include <map>

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
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
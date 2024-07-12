```cpp
#include <iostream>
#include <vector>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    while (stones <= n && stones <= 8) {
        pile.push_back(stones);
        stones += 2; 
    }
    return pile;
}
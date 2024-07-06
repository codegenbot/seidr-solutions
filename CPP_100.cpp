```cpp
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int count = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            pile.push_back(count);
            count++;
        } else {
            pile.push_back(count);
            count += 2;
        }
        n--;
    }
    return pile;
}
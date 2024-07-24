#include <iostream>
#include <vector>
#include <algorithm>

int search(std::vector<int> lst) {
    namespace std;
    int max = 0;
    for (int i : lst) {
        if (i > 0 && count(lst.begin(), lst.end(), i) >= 1) { 
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}
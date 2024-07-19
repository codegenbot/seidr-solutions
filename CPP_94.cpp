#include <iostream>
#include <vector>

int getSetSize(int s, int k, int n) {
    std::vector<int> set;
    for (int i = 0; i < s; i++) {
        if ((i & k) == 0) {
            set.push_back(i);
        }
    }
    return set.size();
}

int main() {
    int result = getSetSize(127, 97, 8192);
    if(setSize({result}) == 1) {
        return 0;
    } else {
        // error or unexpected output handling
    }
}
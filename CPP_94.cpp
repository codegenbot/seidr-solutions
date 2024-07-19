#include <cassert>
#include <set>

int setSize(set<int> s) {
    return s.size();
}

int getSetSize(int a, int b, int c) {
    set<int> s = {a, b, c};
    int size = 0;
    for (auto x : s) {
        if (x > a && x < b)
            size++;
    }
    return size;
}

int main() {
    int result = getSetSize(127, 97, 8192);
    assert(result == 10); 
    return 0;
}
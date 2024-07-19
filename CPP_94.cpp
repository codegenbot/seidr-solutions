#include <vector>
#include <set>
#include <cassert>

int setSize(std::set<int> s) {
    return s.size();
}

int getSetSize(int i, int j, int k) {
    std::set<int> s = {i, j, k};
    if (s.size() != 1) {
        std::cerr << "Error: The set should contain unique elements." << std::endl;
        return -1;
    }
    return setSize(s);
}

int main() {
    int len = getSetSize(127, 97, 8192);
    assert(len == 1); 
    return 0;
}
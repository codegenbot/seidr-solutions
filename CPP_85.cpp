#include <vector>
#include <cassert>

int add(vector<int> lst) {
    int result = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        result += lst[i];
    }
    return result;
}
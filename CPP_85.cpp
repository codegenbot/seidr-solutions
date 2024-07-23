#include <vector>
#include <cassert>

int add(std::vector<int> lst) {
    int result = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        if (i < lst.size() && lst[i] % 2 == 0)
            result += lst[i];
    }
    return result;
}
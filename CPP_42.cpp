#include <vector>
#include <cassert>

std::vector<int> incr_list(std::vector<int> l);

std::vector<int> incr_list(std::vector<int> l) {
    for(int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b);
#include <vector>
#include <cassert>

std::vector<int> incr_list(std::vector<int> l);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> incr_list(std::vector<int> l) {
    for(int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}
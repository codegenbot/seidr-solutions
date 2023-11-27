#include <vector>
#include <list>
#include <cassert>

std::vector<int> filter_integers(std::list<int> values){
    std::vector<int> result;
    for(int value : values) {
        result.push_back(value);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}) ,{3, 3, 3}));
    return 0;
}
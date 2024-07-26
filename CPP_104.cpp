#include <vector>
#include <cassert>

namespace std {
    bool vector<int>::issame(std::vector<int> a, std::vector<int> b){
        if (a.size() != b.size()) {
            return false;
        }
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
}

std::vector<int> unique_digits(std::vector<int> numbers){
    // implementation of unique_digits function
}

int main(){
    assert(std::vector<int>::issame(unique_digits({135, 103, 31}) , {31, 135}));
}
#include <vector>
#include <cassert>

namespace std {
    std::vector<int> generate_integers(int start, int end) {
        std::vector<int> result;
        for(int i = start; i <= end; i++){
            result.push_back(i);
        }
        return result;
    }

    bool issame(std::vector<int> a, std::vector<int> b) {
        for(int i = 0; i < a.size(); i++){
            if(a[i] % 2 == 0){
                return true;
            }
        }
        return false;
    }
}

int main() {
    assert(std::issame(std::generate_integers(17, 89), {}) == true);
    return 0;
}
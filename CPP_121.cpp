#include <vector>
#include <cassert>

namespace Contest {
    int solutions(const std::vector<int>& lst){
        int sum = 0;
        for(size_t i = 0; i < lst.size(); i += 2){
            if(lst[i] % 2 != 0){
                sum += lst[i];
            }
        }
        return sum;
    }
}

int main() {
    assert(Contest::solutions({3, 13, 2, 9}) == 3);
    return 0;
}
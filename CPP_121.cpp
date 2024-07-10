#include <vector>
#include <cassert>

namespace Contest {
    int solutions(const std::vector<int>& lst){
        int sum = 0;
        size_t i; // Declare i before the loop
        for(i = 0; i < lst.size(); i += 2){
            if(lst[i] % 2 != 0){
                sum += lst[i];
            }
        }
        return sum;
    }
}

int main() {
    assert(Contest::solutions({3, 13, 2, 9}) == 3); // Call Contest::solutions
    return 0;
}
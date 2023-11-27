#include <vector>
#include <cassert>

int main() {
    std::vector<int> lst = {3, 13, 2, 9};
    int sum = 0;
    
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    
    assert(sum == 3);
    
    return 0;
}
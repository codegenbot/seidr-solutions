#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i-1] >= lst[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    std::vector<int> test = {5, 4, 3, 2};
    if (is_sorted(test)) {
        std::cout << "The vector is sorted." << std::endl;
    } else {
        std::cout << "The vector is not sorted." << std::endl;
    }
    return 0;
}
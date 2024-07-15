#include <vector>
#include <cassert>

int add(const std::vector<int>& lst) {
    int sum = 0;
    for(size_t i = 0; i < lst.size(); i++) {
        if(i % 2 != 0 && lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(add({4, 4, 6, 8}) == 12);
    // Add more test cases if needed
    return 0;
}
#include <vector>
#include <cassert>

int sum_squares(std::vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0) {
            lst[i] = lst[i] * lst[i];
            sum += lst[i];
        } else if (i % 4 == 0) {
            lst[i] = lst[i] * lst[i] * lst[i];
            sum += lst[i];
        } else {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> test_lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(sum_squares(test_lst) == 830);
    return 0;
}  
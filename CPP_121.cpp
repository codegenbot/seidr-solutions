#define _SCL_SECURE_NO_WARNINGS

#include <vector>
#include <cassert>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    int array[] = {3, 13, 2, 9};
    std::vector<int> lst(array, array + sizeof(array)/sizeof(array[0]));
    assert(solution(lst) == 16);
    return 0;
}
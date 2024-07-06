#include <vector>
#include <initializer_list>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if ((i + 1) % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
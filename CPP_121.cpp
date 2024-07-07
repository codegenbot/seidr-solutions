#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i % 2 == 0 && lst[i] % 2 != 0)) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solution({3, 13, 2, 9}) == 3);
    std::vector<int> lst = {1, 2, 3};
    int result = solution(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
#include <vector>
#include <iostream>

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
    // Example usage
    std::vector<int> testVec = {3, 13, 2, 9};
    assert(solution(testVec) == 3);
    return 0;
}
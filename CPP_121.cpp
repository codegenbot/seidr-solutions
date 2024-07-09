```cpp
#include <vector>

int main() {
    std::vector<int> lst = {1,2,3,4,5};
    int result = solution(lst);
    std::cout << "Result: " << result << std::endl;
}

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}
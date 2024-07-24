```cpp
#include <iostream>
#include <vector>

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    
    std::cout << solution(lst);
}
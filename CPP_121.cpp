```cpp
#include <vector>
#include <iostream>
#include <initializer_list>
using namespace std;

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int runMain() {
    vector<int> lst({3, 13, 2, 9});
    cout << solution(lst);
    return 0;
}
assert(solution({3, 13, 2, 9}) == 16);
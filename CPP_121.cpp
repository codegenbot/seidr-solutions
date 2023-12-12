```
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> lst);

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    int sum = solution(lst);
    cout << "The sum of odd numbers in the list is: " << sum << endl;
    return 0;
}

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}
```
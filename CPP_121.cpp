```
#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int> lst);

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    solution(lst);
    return 0;
}

void solution(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    cout << "The sum of odd numbers in the list is: " << sum << endl;
}
```
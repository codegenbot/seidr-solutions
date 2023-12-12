```
#include <iostream>
#include <vector>

using namespace std;

int solutions(const vector<int>& lst); // Declare the solutions function here

int main() {
    assert (solutions({3, 13, 2, 9}) == 3);
}

int solutions(const vector<int>& lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}
```
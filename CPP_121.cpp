#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int solution(vector<int> lst); // Forward declaration of solution function

int main() {
    vector<int> lst = {3, 13, 2, 9};
    assert (solution(lst) == 3);
    return 0;
}
```
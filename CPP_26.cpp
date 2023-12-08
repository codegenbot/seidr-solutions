```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void remove_duplicates(vector<int> &numbers) {
    auto it = find_if(numbers.begin(), numbers.end(), [](int n){ return count(numbers.begin(), numbers.end(), n) == 1; });
    if (it != numbers.end()) {
        numbers.erase(it);
    }
}
```
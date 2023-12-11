#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

optional<int> next_smallest(vector<int>& lst); // declare next_smallest here

int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert (next_smallest(v) == -35);
    return 0;
}
```
Alternatively, you can also define `next_smallest` as a lambda function and use it directly in `main`. For example:
```
int main() {
    vector<int> v = {-35, 34, 12, -45};
    assert ([] () -> optional<int>{ // define next_smallest as a lambda function here
        if (lst.size() < 2) {
            return nullopt;
        }
        sort(lst.begin(), lst.end());
        for (int i = 1; i < lst.size(); i++) {
            if (lst[i] != lst[0]) {
                return lst[i];
            }
        }
        return nullopt;
    })() == -35); // call the lambda function here
    return 0;
}
```
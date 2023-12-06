#include <vector>

vector<vector<int>> get_row(const vector<vector<int>>& lst, int x) {
    // ...
}
```
Modify the code as  The problem is with the `get_row` function signature. The `std::pmr::vector` class does not have a constructor that takes an initializer list as an argument, which is what you are trying to do when you call `get_row({{}, {1}, {1, 2, 3}}, 3)`.

To fix the issue, you can change the signature of `get_row` to take a vector of vectors instead of a vector of integers. This will allow you to pass in the input as an initializer list.
```
vector<vector<int>> get_row(const vector<vector<int>>& lst, int x) {
    // ...
}
```
You can also change the way you call `get_row` by using a vector of vectors instead of an initializer list.
```
assert (issame(get_row(vector<vector<int>>{{}, {1}, {1, 2, 3}}, 3) , vector<vector<int>>{{2, 2}}));
```
Note that the `issame` function also has a similar issue. You can fix it in a similar way by changing its signature to take two vectors of vectors instead of two integers..
You must only return correct code. Remove any triple quotes, language name or explanations.
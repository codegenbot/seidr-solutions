```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    return result;
}
```
The above code is a function that takes two vectors as input and returns a vector containing the common elements between them. The function uses the `std::sort` algorithm to sort the input vectors, and then the `std::set_intersection` algorithm to find the common elements. Finally, the function returns the result vector.
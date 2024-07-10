Find the smallest pair of adjacent elements in an array that are not equal.
The function should take a vector of integers as input and return a new vector containing the smallest pair of adjacent elements that are not equal. If there is no such pair, it returns an empty vector.

```cpp
vector<int> find_smallest_pair(vector<int> lst) {
    if (lst.size() < 2) return vector<int>();
    int min_diff = INT_MAX;
    int result1 = -1, result2 = -1;
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] != lst[i + 1]) {
            if (abs(lst[i] - lst[i + 1]) < min_diff) {
                min_diff = abs(lst[i] - lst[i + 1]);
                result1 = lst[i];
                result2 = lst[i + 1];
            }
        }
    }
    return vector<int>{result1, result2};
}
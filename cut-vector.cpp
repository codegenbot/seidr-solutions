[PYTHON]
def cut_vector(vec):
    n = len(vec)
    result = []

    if n == 0:
        return result

    min_diff = float('inf')
    left_sum = vec[0]
    right_sum = sum(vec[1:])
    diff = abs(left_sum - right_sum)

    if diff <= min_diff:
        result.append(0)

    for i in range(1, n-1):
        left_sum += vec[i]
        right_sum -= vec[i]
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            result.append(i)

    # Handle case where input vector has even number of elements
    if n % 2 == 0:
        left_sum = vec[n-1] + vec[n-2]
        right_sum = sum(vec[:n-2])
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            result.append(n-1)

    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 2, 3, 4, 5, 6]) == [0, 1, 2, 3, 4, 5]
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == [0, 1, 2, 3, 4, 5, 6]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8]) == [0, 1, 2, 3, 4, 5, 6, 7]
[/TESTS]
```

In C++, you can use the `std::vector` class to represent a vector of integers. To find the spot where the sum of the numbers on one side is equal to or as close as possible to the sum of the numbers on the other side, you can iterate through the vector and keep track of the current sum on each side. Whenever the difference between the two sums is smaller than the minimum difference found so far, update the result with the index of the spot where the cut should be made.

Here's an example solution in C++:
```
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> cut_vector(const std::vector<int>& vec) {
    int n = vec.size();
    if (n == 0) return {};

    int min_diff = INT_MAX;
    int left_sum = vec[0];
    int right_sum = 0;
    for (int i = 1; i < n; ++i) {
        left_sum += vec[i];
        right_sum += vec[n - i - 1];
        if (abs(left_sum - right_sum) <= min_diff) {
            min_diff = abs(left_sum - right_sum);
            result.push_back(i);
        }
    }

    return result;
}
```
Note that in C++, you can use the `abs` function from the `<cmath>` header file to compute the absolute value of a number. Also, the `std::vector` class provides a `size()` method to get the size of the vector, and it is more efficient than using the `sizeof` operator.
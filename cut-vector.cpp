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

In C++, you can use the `std::vector` class to represent a vector of integers. To find the spot where the difference between the left and right sides is as small as possible, you can use a similar approach as in the Python code. The main difference is that you need to use the appropriate data structures and algorithms to solve the problem.

Here's an example implementation in C++:
```
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> cut_vector(std::vector<int> vec) {
    int n = vec.size();
    std::vector<int> result;

    if (n == 0) {
        return result;
    }

    double min_diff = INFINITY;
    int left_sum = vec[0];
    int right_sum = 0;
    for (int i = 1; i < n; i++) {
        right_sum += vec[i];
    }
    double diff = abs(left_sum - right_sum);

    if (diff <= min_diff) {
        result.push_back(0);
    }

    for (int i = 1; i < n-1; i++) {
        left_sum += vec[i];
        right_sum -= vec[i];
        diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            result.push_back(i);
        }
    }

    // Handle case where input vector has even number of elements
    if (n % 2 == 0) {
        left_sum = vec[n-1] + vec[n-2];
        right_sum = 0;
        for (int i = 0; i < n-2; i++) {
            right_sum += vec[i];
        }
        diff = abs(left_sum - right_sum);
        if (diff <= min_diff) {
            result.push_back(n-1);
        }
    }

    return result;
}
```
This implementation uses the `std::vector` class to represent a vector of integers, and the `abs()` function from `<cmath>` to calculate the absolute difference between the left and right sums. The rest of the code is similar to the Python implementation, with some minor adjustments for C++ syntax and data structures.

Note that this implementation assumes that the input vector has at least one element. If the input vector is empty, the function will return an empty vector.
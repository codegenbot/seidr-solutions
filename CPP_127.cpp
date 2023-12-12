```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);
    if (start <= end) {
        int length = end - start + 1;
        if (isPrime(length)) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        return "NO";
    }
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

The code above is a possible solution to the problem. It uses the `std::vector` container and the `std::allocator` allocator, which are both part of the C++ Standard Library. The `intersection` function takes two vectors as input and returns a string indicating whether the intersection of the two intervals is prime or not.

The `isPrime` function checks if a given number is prime by iterating from 2 to the square root of the number and checking if it is divisible by any of them. If it is, then the number is not prime and the function returns false. Otherwise, the number is prime and the function returns true.

The `intersection` function first calculates the start and end points of the intersection of the two intervals. Then, it checks if the length of the intersection is prime using the `isPrime` function. If it is, then the function returns "YES", otherwise it returns "NO".

Note that this code assumes that the input vectors are sorted in ascending order. If the input vectors are not sorted, then the code may not work correctly.
```
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v;
    int n;
    while (std::cin >> n) {
        v.push_back(n);
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it % 2 == 0) {
            std::cout << *it << " ";
        }
    }
    return 0;
}
```
This code is a simple program that reads in a list of integers from the user and then prints out only the even numbers. It uses a vector to store the input and iterates over it using a for loop, checking each element to see if it is even before printing it out.
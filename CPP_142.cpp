```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <initializer_list>

#define __STDCPP_VERSION__ 201703L

using namespace std;

int sum_squares(initializer_list<int> lst) {
    int total = 0;
    for (int i = 0, n = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0)
            total += pow(lst.begin()[i], 2);
        else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0)
            total += pow(lst.begin()[i], 3);
    }
    return total;

int main() {
    int result = sum_squares({1, 2, 3, 4, 5}); 
    cout << "The sum of squares is: " << result << endl;
    return 0;
}
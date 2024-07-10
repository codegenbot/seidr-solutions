```c++
#include <vector>
#include <initializer_list>
#include <iostream>

using namespace std;

int sum(std::initializer_list<int> vec) {
    int total = 0;
    for (const auto& num : vec) {
        total += num;
    }
    return total;
}

int main() {
    int result = sum({127, 97, 8192});
    cout << "The sum is: " << result << endl;
    return 0;
}
```c++
#include <vector>
#include <initializer_list>
#include <iostream>

using namespace std;

int basement(vector<int> v) {
    int sum = 0;
    int i = 0;
    for (int num : v) {
        sum += num;
        if (sum < 0)
            return i;
        i++;
    }
    return -1;
}

int main() {
    vector<int> v = {-3, 2, 5, -4, 3};
    cout << basement(v);
}
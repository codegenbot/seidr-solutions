#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if (count_a == count_b) {
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

vector<int> arr = {3, 6, 2, 9, 10};
vector<int> sorted_arr = sort_array(arr);
for (int num : sorted_arr) {
    cout << num << " ";
}
cout << endl;
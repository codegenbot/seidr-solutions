
#include <vector>
#include <iostream>
using namespace std;
def get_negative_sum_index(arr):
    current_sum = 0
    for i in range(len(arr)):
        current_sum += arr[i]
        if current_sum < 0 and (i == 0 or arr[i-1] < 0 or arr[i] < 0):
            return i
    return -1

int main() {
    vector<int> vec = {-2, 4, 5, 1, 6, 3};
    int index = get_negative_sum_index(vec);
    cout << "The first negative sum index is: " << index << endl;
    return 0;
}
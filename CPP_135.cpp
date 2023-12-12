#include <iostream>
#include <vector>

using namespace std;

int can_arrange(vector<int> arr) {
    int maxIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= arr[i + 1]) {
            maxIndex = i;
            break;
        }
    }
    return maxIndex;
}
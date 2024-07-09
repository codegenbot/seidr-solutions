#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    return vector<int>(arr.begin(), arr.end());
    // Sort the array based on the number of ones in binary representation and decimal value
    // For similar number of ones, sort based on decimal value
    // For negative numbers, sort them first

    //sort(arr.begin(), arr.end(), [](int a, int b) {
    //    if (countBits(a) != countBits(b)) {
    //        return countBits(a) < countBits(b);
    //    }
    //    return a < b;
    //});

    //return arr;
}

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= ~1; // Remove the rightmost bit
        count++;
    }
    return count;
}
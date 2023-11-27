#include <stdio.h>
#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
            count++;
        }
    }
    return sum;
}

int main() {
    vector<int> arr = {111, 21, 3, 4000, 5, 6, 7, 8, 9};
    int k = 4;
    int result = add_elements(arr, k);
    printf("%d\n", result);
    return 0;
}
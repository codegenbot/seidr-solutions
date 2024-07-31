#include <iostream>
using namespace std;

int minSubArraySum(int n) {
    if(n<0)
        return 0;
    int min_sum = INT_MAX;
    for (int i = 1; i <= n; i++) {
        int current_sum = 0;
        for (int j = i; j <= n; j++) {
            current_sum += j;
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    cout << "minSubArraySum(2) = " << minSubArraySum(2) << endl;
    return 0;
}
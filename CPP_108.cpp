#include <vector>
using namespace std;

int count_non_zero_digit_sums(vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Input code based on the contest rules

    // Call the modified function
    return 0;
}
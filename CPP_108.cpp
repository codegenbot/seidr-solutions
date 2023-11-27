#include <vector>

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int absNum = abs(num);
        while (absNum != 0) {
            sum += absNum % 10;
            absNum /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Write code to read input from user and call count_nums function
    // Return the output

    return 0;
}
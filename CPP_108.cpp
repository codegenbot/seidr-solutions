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
    // Provide necessary implementation for the main() function and any other requirements according to the task description
    return 0;
}
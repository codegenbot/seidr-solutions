#include <iostream>
#include <vector>
using namespace std;

int sum_squares(vector<int> numbers) {
    int total = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0) {
            total += numbers[i] * numbers[i];
        } else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0) {
            total += numbers[i] * numbers[i] * numbers[i];
        }
    }
    return total;
}
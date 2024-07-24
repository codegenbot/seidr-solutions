#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int sum_squares(vector<int> lst) {
    int total = 0;
    for (int i : lst) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0)
            total += pow(i, 2);
        else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0)
            total += pow(i, 3);
    }
    return total;

int main() {
    int result = sum_squares({1, 2, 3, 4, 5}); 
    cout << "The sum of squares is: " << result << endl;
}
#include <vector>
#include <cmath>
using namespace std;

int sum_squares(vector<float> lst) {
    int total = 0;
    for (float num : lst) {
        double roundedNum = ceil(num);
        total += pow(roundedNum, 2);
    }
    return total;
}

int main() {
    assert(sum_squares({-1,1,0})==2);
    vector<float> numbers = {1.5f, -0.3f, 4.2f};
    int result = sum_squares(numbers);
    return 0;
}
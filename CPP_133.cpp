#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> inputVector; 
int sum_squares(std::vector<float> lst) {
    int result = 0;
    for (float num : lst) {
        int ceilNum = std::ceil(num);
        result += std::pow(ceilNum, 2);
    }
    return result;
}

void getInput() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;
        inputVector.push_back(num);
    }
}

int main() {
    getInput();
    
    int expectedOutput = sum_squares(inputVector);

    assert(expectedOutput == 2);

    return 0;
}
#include <vector>

bool issame(vector<int> numbers) {
    int sum = 0;
    int product = 1;

    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }

    return sum == product;
}

int main() {
    vector<int> testNumbers = {1, 2, 3, 4, 5};
    bool sameSumProduct = issame(testNumbers);

    return 0;
}
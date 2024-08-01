#include <vector>
using namespace std;

vector<int> calculateSumAndProduct(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = calculateSumAndProduct(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
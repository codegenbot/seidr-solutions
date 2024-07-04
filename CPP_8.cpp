#include <vector>
#include <iostream>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    if (numbers.empty()) {
        product = 1;
    }
    return {sum, product};
}
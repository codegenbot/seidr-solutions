#include <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    if (numbers.empty()) {
        return {0, 1};
    }
    
    int sum = 0;
    int product = 1;
    for(int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}
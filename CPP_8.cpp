#include <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int total_sum = 0;
    int total_product = 1;
    
    for (int num : numbers) {
        total_sum += num;
        total_product *= num;
    }
    
    return {total_sum, total_product};
}
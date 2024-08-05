#include <vector>
#include <utility>
#include <cassert>

using namespace std;

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    return {sum, product}; // Return a vector with sum and product
}

int main() {
    assert(sum_product({10}) == vector<int>{10, 10}); // Use vector<int> in the assertion instead of pair<int, int>
    
    return 0;
}
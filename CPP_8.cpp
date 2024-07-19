#include <vector>
#include <cassert>

using namespace std;

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;
    
    for(int num : numbers){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main(){
    assert(sum_product({10}) == vector<int>{10, 10});
    
    return 0;
}